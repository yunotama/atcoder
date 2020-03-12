#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int a, b, q;
    cin >> a >> b >> q;
    vector<ll> s(a+2),t(b+2),x(q);
    
    rep(i,a){
        cin >> s[i+1];
    }
    rep(i,b){
        cin >> t[i+1];
    }
    s[0]=-20'000'000'000;
    t[0]=-20'000'000'000;
    s[a+1]=30'000'000'000;
    t[b+1]=30'000'000'000;
    rep(i,q){
        cin >> x[i];
    }
    rep(i,q){
    ll sh1, sh2;
    ll te1, te2;
    auto e = upper_bound(s.begin(),s.end(), x[i]);
    auto g = upper_bound(t.begin(), t.end(), x[i]);
    sh1 = *e - x[i];//右
    sh2 = *(e - 1) - x[i];//左
    te1 = *(g)-x[i];//右
    te2 = *(g - 1) - x[i];//左
    ll ans = 30'000'000'000;
    ans = min(ans, max(sh1, te1)); //右s右t
    ans = min(ans, max(-sh2, -te2)); //左s左t
    ans = min(ans, min(sh1*2-te2,sh1-te2*2));//右s左t
    ans = min(ans, min(te1*2 - sh2, te1 - sh2*2));//右t左s
    cout << ans << endl;
    }
}
