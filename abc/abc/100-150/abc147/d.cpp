#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n;i++)
using namespace std;
int main(){
    int n;
    cin >> n;
    long long mod = 1000000007;
    vector<long long> a(n);
    rep(i, n) cin >> a[i];
    long long ans = 0;
    rep(i,60){
        vector<int> cnt(2);
        rep(j,n){
            cnt[(a[j] >> i) & 1]++;
        }
        long long tmp = 1ll * cnt[0] * cnt[1] % mod;
        rep(j,i){
            tmp *= 2;
            tmp %= mod;
        }
        ans += tmp;
        ans %= mod;
}
cout << ans << endl;
}