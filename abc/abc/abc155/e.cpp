#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    string n;
    cin >> n;
    int l = n.size();
    vector<int> p(l + 1);
    ll ans = 0;
    rep(i,l){
        if((n[l-i-1]-'0'+p[l-i])>=6){
            p[l-i-1]++;
            ans += 10-(n[l-i-1]-'0'+p[l-i]);
            p[l - i]=0;
        }else{
            p[l-i]+=(n[l-i-1]-'0');
            ans += p[l - i];
        }
    }
    ans += p[0];
    cout << ans << endl;
}
