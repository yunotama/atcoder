#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
const int mod = 1000000007;
const int N = 2e5 + 10;
const int K = 20;
vector<int> to[N];
vector<int> dep1(N);
// a^nのmodを計算するこれは(1/a)^(n+2)のmodでもある。
ll powmod(ll a, ll n){
    ll ret = 1;
    for (; n; n >>= 1){
        if (a & 1)
            ret = ret * a % mod;
    }
    a = a * a % mod;
    return ret;
};
int sqr (int a){
    return a * a;
};
ll gcd(ll a,ll b){
    ll r;
    while(r=a%b){
        a = b;
        b = r;
    }
    return b;
};
int dfs(int v, int p=-1){
    for(int u:to[v]){
        if(u==p)
            continue;
        dep1[u]++;
        dfs(u, v);
    }
};
int bfs(){
    while (!next.empty())
    {
        pair<int, int> now = next.front();
        next.pop();
    }
}
int main(){
    
}