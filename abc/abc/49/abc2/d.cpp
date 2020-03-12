#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> to(n, vector<int>(n));
    rep(i,m){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        to[x][y] = 1;
        to[y][x] = 1;
    }
    int k = 1;
    rep(i,n){
        k *= 2;
    }
    int ans = 0;
    rep(i,k){
        int l = i;
        int cnt = 0;
        vector<int> v;
        bool flag = true;
        rep(j,n){
            int r = l % 2;
            l /= 2;
            if (r == 0){
                v.push_back(j);
                cnt++;
            }
        }
        for (auto e : v)
        {
            for (auto f : v)
            {
                if(f==e)
                    continue;
                if ( to[e][f] != 1)
                {
                    flag = false;
                    break;
                }
            }
            if (!flag)
            {
                break;
            }
        }
        if (flag)
        {
            ans = max(cnt, ans);
        }
    }
    cout << ans << endl;
}
