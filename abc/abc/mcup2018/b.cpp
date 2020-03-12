#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 1000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    int dp[1000005];
    fill(dp, dp + n, INF);
    for (int i = 0; i < n;i++){
        *lower_bound(dp, dp + n, a[i]) = a[i];
    }
    cout << lower_bound(dp, dp + n, INF) - dp << endl;
}
