#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    ll ans = 0;
    map<char,ll> mp;
    rep(i,n){
        string s;
        cin >> s;
        mp[s[0]]++;
    }
    string str = "MARCH";
    rep(i,3){
        for (int j = i + 1;j <= 4;j++){
            for(int k = j + 1; k <= 5;k++){
                ans += mp[str[i]] * mp[str[j]] * mp[str[k]];
            }
        }
    }
    cout << ans << endl;
}
