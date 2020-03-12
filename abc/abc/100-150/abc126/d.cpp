#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
vector<pair<int, int>> G[100005];
int ans[100005];
void dfs(int v, int p = -1, int color = 0){
    ans[v] = color;
    for(auto e:G[v]){
        if(e.first == p)
            continue;
        if(e.second %2 == 0)
            dfs(e.first, v, color);
        else
            dfs(e.first, v, 1 - color);//異なる色
    }
}
int main(){
    int n;
    cin >> n;
    rep(i,n-1){
        int u,v,w;
        cin >> u >> v >> w;
        u--;
        v--;
        G[u].push_back({v, w});
        G[v].push_back({u, w});
    }
    dfs(0);//0を根とする
    rep(i, n) cout << ans[i] << endl;
}