#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> mp(h, vector<char>(w));
    int x, y;
    rep(i,h){
        rep(j,w){
            cin >> mp[i][j];
            if(mp[i][j]=='s'){
                x = j;
                y = i;
                mp[y][x] = '#';
            }
        }
    }
    queue<pair<int, int>> que;
    que.emplace(y,x);
    bool flag = false;
    while(!que.empty()){
        tie(y,x) = que.front();
        que.pop();
        int lx,rx,uy,dy;
        lx = max(0, x - 1);
        uy = max(0, y - 1);
        rx = min(w-1, x + 1);
        dy = min(h-1, y + 1);
        if(mp[y][lx]!='#'){
            if (mp[y][lx] == 'g')
            {
                flag = true;
                break;
            }
            mp[y][lx] = '#';
            que.emplace(y, lx);
        }
  
        if(mp[y][rx]!='#'){

            if (mp[y][rx] == 'g')
            {
                flag = true;
                break;
            }
            mp[y][rx] = '#';
            que.emplace(y, rx);
        }
        if(mp[uy][x]!='#'){
            if (mp[uy][x] == 'g')
            {
                flag = true;
                break;
            }
            mp[uy][x] = '#';
            que.emplace(uy, x);
        }
        if(mp[dy][x]!='#'){
            if (mp[dy][x] == 'g')
            {
                flag = true;
                break;
            }
            mp[dy][x] = '#';
            que.emplace(dy, x);
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
