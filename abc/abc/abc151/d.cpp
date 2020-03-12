#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int h, w;
    cin >> h >> w;
    queue<pair<int,int>> next;
    int s[h + 2][w + 2];
    rep(i,h+2){
        rep(j,w+2){
            s[i][j] = -1;
        }
    }
    rep(i, h)
    {
        rep(j, w)
        {
            char c;
            cin >> c;
            if (c == '.')
            {
                s[i + 1][j + 1] = 0;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= h;i++){
        for (int j = 1; j <= w;j++){
            rep(k, h)
            {
                rep(l, w)
                {
                    if (s[k+1][l+1]!=-1)
                    {
                        s[k + 1][l + 1] = 0;
                    }
                }
            }
            int tmp = 1;
            if(!s[i][j]){
            next.push({i, j});
            s[i][j] = 1;
            while(!next.empty()){
                pair<int, int> now = next.front();
                next.pop();
                if (!s[now.first-1][now.second])
                {
                    s[now.first - 1][now.second] = s[now.first][now.second] + 1;
                    next.push({now.first-1, now.second});
                }
                if (!s[now.first][now.second - 1])
                {

                    s[now.first][now.second - 1] = s[now.first][now.second] + 1;
                    next.push({now.first, now.second - 1});
                }
                if(!s[now.first+1][now.second]){
                    s[now.first + 1][now.second] = s[now.first][now.second] + 1;
                    next.push({now.first + 1, now.second});
                }
                if(!s[now.first][now.second+1]){
                    s[now.first][now.second + 1] = s[now.first][now.second] + 1;
                    next.push({now.first, now.second + 1});
                }
                tmp = max(s[now.first][now.second],tmp);
             }
            }
            ans = max(tmp, ans);
 
        }
    }
    cout << ans-1 << endl;
}
