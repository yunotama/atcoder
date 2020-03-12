#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    vector<vector<char>> c(3, vector<char>(3));
    rep(i,3){
        rep(j,3){
            cin >> c[i][j];
        }
    }
    rep(i,3){
        cout << c[i][i];
    }
    cout << endl;
}
