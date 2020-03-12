#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
ll dp[100005];
int main()
{
    int n;
    cin >> n;
    ll a = 6;
    vector<int> v;
    v.push_back(1);
    rep(i,10){
        v.push_back(a);
        a *= 6;
    }
    a = 9;
    rep(i,9){
        v.push_back(a);
        a *= 9;
    }
    fill(dp, dp + 100005, INF);
    sort(v.rbegin(), v.rend());
    dp[0] = 0;
    rep(i,v.size()){
        rep(j,100005){
            if(dp[j]==INF)
                continue;
            if(j+v[i]<=n){
                dp[j + v[i]] = min(dp[j + v[i]], dp[j] + 1);
            }
        }
    }
    cout << dp[n] << endl;
}
