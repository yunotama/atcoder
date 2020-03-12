#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int x,f,n;
    cin >> x >> f >> n;
    vector<pair<int,int>> dg;
    rep(i,n){
        int d, g;
        cin >> d >> g;
        dg.emplace_back(d, g);
    }
    sort(dg.begin(), dg.end());
    vector<ll> dp(n+1);
    dp[0] = f;
    int inf = 1000000000;
    int y = 0;
    rep(i,n+1){
        int d, g;
        tie(d, g) = dg[i];
        ll tmp;
        tmp = dp[y + 1];
        dp[y + 1] = max(dp[y] + g, dp[y + 1]);
        for(int j = y + 1 ; j<=i;j++){
            if (dp[j] >= d){
                    ll tmp2 = dp[j+1];
                    dp[j + 1] = max(tmp + g, dp[j + 1]);
                    tmp = tmp2;
            }else{
                y = j + 1;
                dp[j] = -inf;
            }
        };
    }
    int ans = -1;
    for (int i = y; i < n + 1;i++)
    {
        if(dp[i]-x>=0){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
