#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n, u, v;
    cin >> n >> u >> v;
    vector<int> to[n+1];
    rep(i, n - 1){
        int a, b;
        cin >> a >> b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    
}
