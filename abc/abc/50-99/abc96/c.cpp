#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int h,w;
    cin >> h >> w;
    vector<vector<char>> s(h+2, vector<char>(w+2,'.'));
    rep(i,h){
        rep(j,w){
            cin >> s[i+1][j+1];
        }
    }
    int mvx[4] = {0, 1, 0, -1};
    int mvy[4] = {1, 0, -1, 0};
    rep(i,h){
        rep(j,w){
            if(s[i+1][j+1] == '#'){
                bool flag = false;
                rep(nx,4){
                    if(s[i+1+mvx[nx]][j+1+mvy[nx]] == '#'){
                        flag = true;
                    }
                }
                if(!flag){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
}
