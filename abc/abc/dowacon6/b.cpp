#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int mod = 1000000007;
ll ans = 0;
int f(int n){
    int ret = 1;
    for (int i = 2; i <= n;i++){
        ret = (ret * i);
    }
    return ret;
}
int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    int l = f(n - 1);
    rep(i, n) cin >> x[i];
    double dp[100005];
    int tmp = 0;
    for (int i = 1; i <= n;i++){
        dp[i] = (tmp + 1)/i ;
        tmp = (tmp + dp[i]);
    }

    ll ans = 0;
    rep(i,n-1){
        ans =(ans + (x[i + 1] - x[i]) * dp[i + 1]);
    }
    ans = ans*l%mod;
    cout << ans << endl;
}
