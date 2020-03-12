#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using namespace std;
int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<int>> mp(h, vector<int>(w));
    rep(i,h){
        rep(j,w){
            cin >> mp[i][j];
        }
    }
    int cnt = 0;
    vector<string> str;
    rep(i,h){
        rep(j,w-1){
            if(mp[i][j]%2!=0){
                mp[i][j + 1]++;
                mp[i][j]--;
                cnt++;
                string s;
                s += to_string(i + 1);
                s += " ";
                s += to_string(j + 1);
                s += " ";
                s += to_string(i+1);
                s += " ";
                s += to_string(j+2);
                str.push_back(s);
            }
        }
    }
    rep(i,h-1){
        if(mp[i][w-1]%2!=0){
            mp[i + 1][w-1]++;
            mp[i][w-1]--;
            cnt++;
            string s;
            s += to_string(i+1);
            s += " ";
            s += to_string(w);
            s += " ";
            s += to_string(i+2);
            s += " ";
            s += to_string(w);
            str.push_back(s);
        }
    }
    cout << cnt << endl;
    rep(i,cnt){
        cout << str[i] << endl;
    }
}
