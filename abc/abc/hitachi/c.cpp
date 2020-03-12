#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
vector<int> to[200005];
int main()
{
    int n;
    cin >> n;
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    int num[3]={0,0,0};
    rep(i,n){
        num[(i+1) % 3]++;
    }
    



}
