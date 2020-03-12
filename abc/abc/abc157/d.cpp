#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
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
/*
vector<int> tomo[200005],block[200005];
vector<bool> seen(200005);
int cnt;
void dfs(int v){
    seen[v] = true;
    for(auto p:tomo[v]){
        if(seen[p])
            continue;
        cnt++;
        dfs(p);
    }
}
*/
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m), b(m);
    vector<int> c(k), d(k);
    vector<int> con(n),con2(n);
    UnionFind uf(n);
    rep(i,m){
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        uf.connect(a[i], b[i]);
        con[a[i]]++;
        con[b[i]]++;
        /*
        tomo[a[i]].push_back(b[i]);
        tomo[b[i]].push_back(a[i]);
        */
    }
    rep(i,k){
        cin >> c[i] >> d[i];
        c[i]--;
        d[i]--;
        if(uf.root(c[i]) == uf.root(d[i])){
        con[c[i]]++;
        con[d[i]]++;
    }
    }
    int cnt;
    rep(i, n)
    {
        cnt = uf.size(i)-1;
        cnt -= con[i];
        cout << cnt << " ";
    }
    cout << endl;
}
