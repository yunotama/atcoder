#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
ll mod = 1000000007;
ll dp[2][1001][1001];
ll solve(vector<int> a,vector<int>b){
    for (int i = 0; i < 2;i++)
        for (int j = 0; j < 1001;j++)
            for (int k = 0; k < 1001;k++)
                dp[i][j][k] = 0;
    int cur = 0;
    dp[0][0][0] = 1;
    int s = 0;
    for (int i = 0; i < a.size();i++)
        s += a[i];
    reverse(b.begin(), b.end());
    b.push_back(-1);
    reverse(b.begin(), b.end());
    for (int i = 0; i < b.size() - 1;i++){
        for (int j = 0; j <= s;j++){
            if(b[i] != b[i+1]){
                ll n = 0;
                for (int k = 0; k <= j;k++)
                    n += dp[cur][j][k];
                n % mod;
                for (int k = 0; k <= s - j;k++)
                    dp[1 - cur][j + k][k] = n;
            }else{
                ll n = 0;
                for (int k = 0;k <=s-j;k++){
                    n += dp[cur][j][k];
                    if(n>=mod)
                        n -= mod;
                    dp[1 - cur][j + k][k] = n;
                }
            }
        }
        cur = 1 - cur;
        for (int j = 0; j <= s;j++)
            for (int k = 0; k <= s;k++)
                dp[1 - cur][j][k] = 0;           
    }
    ll r = 0;
    for (int i = 0; i <= s;i++)
        r += dp[cur][s][i];
    return r % mod;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i,n){
        cin >> a[i];
    }
    rep(j,m){
        cin >> b[j];
    }
    cout << solve(a, b) * solve(b, a) % mod << endl;
}

ll calc(vector<int> a, vector<int> b)
{
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 1001; j++)
            for (int k = 0; k < 1001; k++)
                dp[i][j][k] = 0;
    int cur = 0;
    dp[0][0][0] = 1;
    int s = 0;
    for (int i = 0; i < a.size(); i++)
        s += a[i];
    reverse(b.begin(), b.end());
    b.push_back(-1);
    reverse(b.begin(), b.end());
    for (int i = 0; i < b.size() - 1; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (b[i] != b[i + 1])
            {
                ll n = 0;
                for (int k = 0; k <= j; k++)
                    n += dp[cur][j][k];
                n %= mod;
                for (int k = 0; k <= s - j; k++)
                    dp[1 - cur][j + k][k] = n;
            }
            else
            {
                ll n = 0;
                for (int k = 0; k <= s - j; k++)
                {
                    n += dp[cur][j][k];
                    if (n >= mod)
                        n -= mod;
                    dp[1 - cur][j + k][k] = n;
                }
            }
        }
        cur = 1 - cur;
        for (int j = 0; j <= s; j++)
            for (int k = 0; k <= s; k++)
                dp[1 - cur][j][k] = 0;
    }
    ll r = 0;
    for (int i = 0; i <= s; i++)
        r += dp[cur][s][i];
    return r % mod;
}