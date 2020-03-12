#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int h,w;
    cin >> h >> w;
    vector<vector<char>> ans(2*h, vector<char>(w));
    rep(i,h){
        rep(j,w){
            char C;
            cin >> C;
            ans[i * 2][j] = C;
            ans[i * 2 + 1][j] = C;
        }
    }
    rep(i,2*h){
        rep(j,w){
            cout << ans[i][j];
        }
        cout << endl;
    }
    

}