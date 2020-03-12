#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
int inf = 100000000;
int main()
{
    int n,m,l,x;
    cin >> n >> m >> l >> x;
    vector<int> a(n);
    vector<vector<int>> dp(10005,vector<int>(1002,inf));

    rep(i,n){
        cin >> a[i+1];
    }
    dp[0][0] = 0;
    for (int i = 1; i <= n;i++)
    {
        rep(j,m){
            dp[i][j] = min(dp[i][j], dp[i - 1][j]);
            dp[i][j] = min(dp[i][j],dp[i - 1][((j - a[i]) % m + m) % m] + a[i]);
        }
    }
    if(dp[n][l] <= x*m){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}
