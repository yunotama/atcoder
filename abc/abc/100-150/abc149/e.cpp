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
    vector<pair<ll,int>> b;
    rep(i,n){
        for (int j = i + 1; j < n;j++)
        {
            if(j==i){
                b.emplace_back((a[j] + a[i]) * 2, 2);
            }else{
                b.emplace_back((a[j] + a[i]) * 2, 1);
            }
        }
    }
        sort(b.begin(), b.end(), greater<pair<ll,int>>());
    ll ans = 0;
    int i = 0;
    for (; i < m - 1;i++)
    {        
        ans += b[i].first/b[i].second;
        if(b[i].second==1)
            i++;
    }
    if(m==i){
        ans += b[m-1].first / 2;
    }

    cout << ans << endl;
}
