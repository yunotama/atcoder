#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> b;
    sort(a.begin(), a.end(), greater<ll>());
    rep(i, n)
    {
        rep(j, n-i-1)
        {
            b.push_back(a[j+i+1] + a[i]);
            b.push_back(a[j+i+1] + a[i]);
        }
    }
    ll ans = 0;
    rep(i, m)
    {
        ans += b[i];
    }
    cout << ans << endl;
}
