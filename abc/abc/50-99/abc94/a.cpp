#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,m,x;
    cin >> n >> m >> x;
    vector<int> a(m);
    int dp[n + 1] = {};
    rep(i,m){
        cin >> a[i];
        dp[a[i]]++;
    }
    int ans = min(count(dp, dp + x, 1),count(dp + x, dp + n + 1, 1));
    cout << ans << endl;
}
