#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
vector<pair<int, int>> G[200005];
vector<int> to[200005];
class LCA
{
public:
    int V, logV;
    vector<int> depth, len;
    vector<vector<int>> parent;

    LCA(int V)
    {
        this->V = V;
        logV = 0;
        while (V > (1LL << logV))
            logV++;
        this->depth = vector<int>(V);
        this->len = vector<int>(V);
        this->parent = vector<vector<int>>(logV, vector<int>(V));
    }

    void init(int v, int par, int d, int l)
    {
        depth[v] = d;
        parent[0][v] = par;
        len[v] = l;
        for (int i = 0; i < (int)G[v].size(); i++)
        {
            int w = G[v][i].first;
            int lc = G[v][i].second;
            if (w == par)
                continue;
            init(w, v, d + 1, lc + l);
        }
    }

    void build()
    {
        for (int k = 0; k + 1 < logV; k++)
        {
            for (int v = 0; v < V; v++)
            {
                if (parent[k][v] < 0)
                    parent[k + 1][v] = -1;
                else
                    parent[k + 1][v] = parent[k][parent[k][v]];
            }
        }
    }

    int query(int u, int v)
    {
        if (depth[u] > depth[v])
            swap(u, v);
        for (int k = 0; k < logV; k++)
        {
            if ((depth[v] - depth[u]) >> k & 1)
                v = parent[k][v];
        }
        if (u == v)
            return u;

        for (int k = logV - 1; k >= 0; k--)
        {
            if (parent[k][u] != parent[k][v])
            {
                u = parent[k][u];
                v = parent[k][v];
            }
        }
        return parent[0][u];
    }
};
class UnionFind
{
public:
    vector<int> Parent;
    UnionFind(int N)
    {
        Parent = vector<int>(N, -1);
    }
    int root(int A)
    {
        if (Parent[A] < 0)
            return A;
        return Parent[A] = root(Parent[A]);
    }

    int size(int A)
    {
        return -Parent[root(A)];
    }
    bool connect(int A, int B)
    {
        A = root(A);
        B = root(B);
        if (A == B)
        {
            return false;
        }
        if (size(A) < size(B))
            swap(A, B);

        Parent[A] += Parent[B];
        Parent[B] = A;

        return true;
    }
};
int main()
{
    int n;
    cin >> n;
    rep(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].emplace_back(b,1);
        G[b].emplace_back(a,1);
    }
    LCA lca(n-1);
    lca.init(0, -1, 0, 0);
    lca.build();
    vector<pair<int, int>> ten;
    vector<int> ans(n);
    vector<int> use(n);
    queue<pair<int, int>> x;
    for(int i = 1; i + 1 <= n ;i+=3){
        x.emplace(i, i + 1);
    }
    queue<int> y;
    for (int i = 3; i <= n;i+=3){
        y.push(i);
    }
    queue<int> z;
    if(n%3==1){
        z.push(n);
    }
    UnionFind uf(n);
    for (int i = 0; i < n-1;i++){
        for (int j = i + 1; j < n;j++){
            int z = lca.query(i, j);
            if((lca.len[i]+lca.len[j]-2*lca.len[z])==3){
                ten.emplace_back(i, j);
                uf.connect(i, j);
            }
        }
    }
    for(auto p:ten){
        if(uf.size(p.first)==2){
            if(x.empty()){
                if(y.empty()){
                    cout << -1 << endl;
                }else{
                    if(z.empty()){
                        ans[p.first] = y.front();
                        y.pop;
                        if(y.empty()){
                            cout << -1 << endl;
                        }else{
                            ans[p.second] = y.front();
                            y.pop();
                        }
                    }else{
                        ans[p.first] = z.front();
                        z.pop();
                        ans[p.second] = y.front();
                        y.pop();
                    }                
                }
            }else{
                ans[p.first] = x.front().first;
                ans[p.second] = x.front().second;
                x.pop();
            } 
        }else{
            if(ans[uf.root(p.first)]%3 == 0){
                continue;
            }else{
            if(y.empty()){
                if(ans[p.first] == 0 && ans[p.second] == 0){
                    if(x.empty()){
                        cout << -1 << endl;
                    }else{
                        ans[p.first] = x.front().first;
                        ans[p.second] = x.front().second;
                    }
                }else{
                    
                }
            }else{
                    ans[uf.root(p.first)] = y.front();
                    y.pop();
                }
            }
        }
    }
}
