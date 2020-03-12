#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,m;
    cin >> n;
    vector<string> s, t;
    map<string, int> mp;
    rep(i,n){
        string k;
        cin >> k;
        s.push_back(k);
        mp[k]++;
    }
    cin >> m;
    rep(i,m){
        string k;
        cin >> k;
        t.push_back(k);
        mp[k]--;
    }
    int ans = 0;
    for (auto e:s){
        ans = max(ans, mp[e]);
    }
    cout << ans << endl;
}
