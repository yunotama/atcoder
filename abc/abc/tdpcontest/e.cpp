#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define inf 1e+10
#define ll long long
using namespace std;
ll dp[2][1100000];
int w[110];
int v[110];
int main()
{
    int n, W;
    cin >> n >> W;
    int V=0;
    rep(i,n){
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i < 1100000; i++)
        dp[0][i] = inf;
    for (int i = 1; i <= n;i++){
        int t = i % 2;
        for (int j = 0; j < 1100000;j++){
            dp[t][j] = inf;
        }
        for (int j = 0; j < 1100000;j++){
            dp[t][j] = min(dp[t][j], dp[!t][j]);
            if(j-v[i-1]>=0)
                dp[t][j] = min(dp[t][j], dp[!t][j - v[i - 1]]+w[i-1]);
        }
    }
    int ret = 0;
    for (int i = 0; i < 1100000;i++){
        if(dp[n % 2][i]<=W)
            ret = i;
    }
    cout << ret << endl;
}

 