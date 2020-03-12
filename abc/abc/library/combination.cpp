struct combination
{
    vector<mint> fact, ifact;
    combination(int n) : fact(n + 1), ifact(n + 1)
    {
        assert(n < mod);
        fact[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            fact[i] = fact[i - 1] * i;
        }
        ifact[n] = fact[n].inv();
        for (int i = n; i >= 1; --i)
        {
            ifact[i - 1] = ifact[i] * i;
        }
    }
    mint operator()(int n, int k)
    {
        if (k < 0 || k > n)
            return 0;
        return fact[n] * ifact[k] * ifact[n - k];
    }
};
void comb(vector<vector<long long int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for (int k = 1; k < v.size(); k++)
    {
        for (int j = 1; j < k; j++)
        {
            v[k][j] = (v[k - 1][j - 1] + v[k - 1][j]);
        }
    }
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<vector<long long int>> v(N + 1, vector<long long int>(N + 1, 0));
    comb(v);
    cout << v[N][K];
    return 0;
}