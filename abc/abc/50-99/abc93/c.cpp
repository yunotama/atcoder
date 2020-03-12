#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    string s;
    cin >> s;
    string t = "abc";
    map<char, int> mp;
    rep(i,3){
        mp[s[i]]++;
    }
    int cnt = 0;
    rep(i,3){
        if(mp[t[i]]){
            cnt++;
        }
    }
    if(cnt == 3){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
