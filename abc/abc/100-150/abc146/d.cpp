#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
queue<int> from[100005];
queue<int> chi;
vector<int> ans[100005];
int k=0;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    vector<pair<int, int>> vp;
    for (int i = 1; i < n;i++){
        int a, b;
        cin >> a >> b;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
        vp.emplace_back(a,b);
    }

    int k = 0;
    map<pair<int, int>, int> I;
    vector<int> cs(n, 0);
    vector<int> used(n,0);
    queue<int> que;
    used[0] = 1;
    que.emplace(0);
    //bfs
    while(!que.empty()){
        int v = que.front();
        que.pop();
        k = max(k, (int)g[v].size());
        int cur = 1;
        //１層探索
        for(int u:g[v]){
            if(used[u])
                continue;
            if(cur==cs[v])//親との同色判定
                cur++;
            cs[u] = I[make_pair(u, v)] = I[make_pair(v, u)] = cur++;//u,v間の色とuを親としたとき使えない色をメモ
            used[u] = 1;
            que.emplace(u);
        }
    }
    cout << k << endl;
    for(auto p:vp)
        cout << I[p] << endl;
}
