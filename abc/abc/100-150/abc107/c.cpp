#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> lx,rx;
    ll cnt = 0;
    lx.push_back(0);
    rx.push_back(0);
    rep(i,n){
        ll x;
        cin >> x;
        if(x<0){
            lx.push_back(-x);
        }
        if(x==0)
            cnt++;
        if(x>0)
        {
            rx.push_back(x);
        }
    }
    sort(lx.begin(), lx.end());
    ll ans = 10000000000;
    for(auto& u:lx){
        ll tmp = cnt;
        for(auto& v:rx){
            ll dis = min(2*u+v,2*v+u);
            if(v!=0){
                tmp++;
            }
            if(tmp==k){
                ans = min(ans, dis);
            }
        }
        cnt++;
    }
    cout << ans << endl;
}
