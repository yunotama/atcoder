#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int a, b;
    cin >> a >> b;
    vector<vector<char>> v(100, vector<char>(100, '.'));
    rep(i,50)
    {
        rep(j, 100)
        {
            v[i][j] = '#';
        }
    }
    int cnt = 0;
    for (int i = 0; i < 49; i += 2)
    {
        rep(j,50){
            v[i][j * 2] = '.';
            cnt++;
            if(cnt == a-1)
                break;
        }
        if(cnt == a-1)
            break;
    }
    cnt = 0;
    for (int i = 99; i >50;i-=2)
    {
        rep(j,50){
            v[i][j * 2] = '#';
            cnt++;
            if(cnt == b-1)
                break;
        }
        if(cnt == b-1)
            break;
    }
    cout << 100 << " " << 100 << endl;
    rep(i,100){
        rep(j,100){
            cout << v[i][j];
        }
        cout << endl;
    }
}
