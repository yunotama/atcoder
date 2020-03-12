#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
vector<int> to[10000000];
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> d(n);
    rep(i,n){
        cin >> d[i];
    }
    rep(i,n){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        to[a].push_back(b);
        to[b].push_back(a);
        
    }


}
