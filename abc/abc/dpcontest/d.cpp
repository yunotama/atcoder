#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int N, W;
    cin >> N >> W;
    vector<ll> w(N), v(N);
    rep(i,N){
        cin >> w[i] >> v[i];
    }
    vector<ll> dp(W + 1);
    rep(i,N){
        for (int j = W; j >=0 ;j--){
            if(j+w[i]<=W)
                dp[j + w[i]] = max(dp[j + w[i]], dp[j] + v[i]);
        }
    }
    ll ans = 0;
    rep(i, W + 1) ans = max(dp[i], ans);
    cout << ans << endl;
}
