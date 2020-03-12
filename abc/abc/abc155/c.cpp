#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    vector<string> p;
    rep(i,n){
        string s;
        cin >> s;
        if(mp[s]==0){
            p.push_back(s);
        }
        mp[s]++;
    }
    vector<pair<int, string>> vs;
    rep(i,p.size()){
        vs.emplace_back(mp[p[i]], p[i]);
    }
    sort(vs.begin(), vs.end(), greater<>());
    int tmp = vs[0].first;
    vector<string> ans;
    rep(i,p.size()){
        if(tmp == vs[i].first){
            ans.push_back(vs[i].second);
        }else{
            break;
        }
    }
    reverse(ans.begin(), ans.end());
    rep(i,ans.size()){
        cout << ans[i] << endl;
    }
}
