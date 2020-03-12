#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n + 1), b(n);
    rep(i, n + 1) cin >> a[i];
    rep(i, n) cin >> b[i];
    long long ans = 0;
    rep(i,n){
        ans += min(b[i], a[i]);
        b[i] -= min(b[i], a[i]);
        ans += min(b[i], a[i + 1]);
        a[i + 1] -= min(a[i+1], b[i]);
    }
    cout << ans << endl;
}