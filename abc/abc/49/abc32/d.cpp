#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,w;
    cin >> n >> w;
    vector<pair<int,int>> vw(n);
    int flag = 0;
    rep(i,n){
        int a,b;
        cin >> a >> b;
        vw.emplace_back(a, b);
        if(b>1000){
            flag = 1;
        }else if(a > 1000){
            flag = 2;
        }else if(n <= 30){
            flag = 3;
        }
    }
    int dp[200005]={};
    ll ans = 0;
    if(flag == 3){
        
        
    }else if(flag == 1){
        int inf = 1000000007;
        rep(i,200005){
            dp[i] = inf;
        }
        dp[0] = 0;
        rep(i,n){
            for (int j = 200004; j-vw[i].first >= 0; j--)
            {
                dp[j] = min(dp[j], dp[j - vw[i].first] + vw[i].second);
            }
        }
        rep(j,200005){
            if(dp[j] <= w){
                ans = j;
            }
        }
    }else if(flag == 2){
        int inf = 0;
        rep(i, 200005)
        {
            dp[i] = inf;
        }
        dp[0] = 0;
        rep(i, n)
        {
            for (int j = 200004; j - vw[i].second >= 0; j--)
            {
                dp[j] = max(dp[j], dp[j - vw[i].second] + vw[i].first);
            }
        }
        rep(j, 200005)
        {
            if (j <= w)
            {
                ans = max((ll)dp[j],ans);
            }
        }
    }

    cout << ans << endl;
}
