#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
const int mod = 1000000007;
struct mint
{
    ll x;
    mint(ll x = 0) : x((x % mod + mod) % mod) {}
    mint operator-() const { return mint(-x); }
    mint &operator+=(const mint a)
    {
        if ((x += a.x) >= mod)
            x -= mod;
        return *this;
    }
    mint &operator-=(const mint a)
    {
        if ((x += mod - a.x) >= mod)
            x -= mod;
        return *this;
    }
    mint &operator*=(const mint a)
    {
        (x *= a.x) %= mod;
        return *this;
    }
    mint operator+(const mint a) const
    {
        mint res(*this);
        return res += a;
    }
    mint operator-(const mint a) const
    {
        mint res(*this);
        return res -= a;
    }
    mint operator*(const mint a) const
    {
        mint res(*this);
        return res *= a;
    }
    mint pow(ll t) const
    {
        if (!t)
            return 1;
        mint a = pow(t >> 1);
        a *= a;
        if (t & 1)
            a *= *this;
        return a;
    }
    mint inv() const
    {

        return pow(mod - 2);
    }
    mint &operator/=(const mint a)
    {
        return (*this) *= a.inv();
    }
    mint operator/(const mint a) const
    {
        mint res(*this);
        return res /= a;
    }
};
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

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    mint ans = 0;
    combination c(n + 4);
    rep(i,n){
        mint now = c(i, k - 1); //iCk-1 k-1>i = 0
        ans += now * a[i];
    }
    reverse(a.begin(), a.end());
    rep(i, n)
    {
        mint now = c(i, k - 1); //iCk-1 k-1>i = 0
        ans -= now *a[i];
    }
    cout << ans.x << endl;
    return 0;
}
