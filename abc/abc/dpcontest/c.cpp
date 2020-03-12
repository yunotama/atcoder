#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> abc(n,vector<int>(3));
    rep(i,n){
        cin >> abc[i][0] >> abc[i][1] >> abc[i][2];
    }
    vector<vector<int>> dp(n + 1,vector<int>(3,-1));
    dp[0][0] = abc[0][0];
    dp[0][1] = abc[0][1];
    dp[0][2] = abc[0][2];
    rep(i,n-1){
        rep(j,3){
            if(dp[i][j]<0)
                continue;
            dp[i + 1][j] = max(dp[i][(j + 1) % 3] + abc[i+1][j], dp[i][(j + 2) % 3] + abc[i+1][j]);        
        }
    }
    int ans = 0;
    rep(i,3){
        ans = max(ans, dp[n - 1][i]);
    }
    cout << ans << endl;
}
