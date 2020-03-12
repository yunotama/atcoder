#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define inf 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    rep(i,n){
        cin >> h[i];
    }
    sort(h.begin(), h.end(), greater<int>());
    rep(i,min(k,n)){
        h[i] = 0;
    }
    ll ans = 0;
    rep(i,n){
        ans += h[i];
    }
    cout << ans << endl;
}
