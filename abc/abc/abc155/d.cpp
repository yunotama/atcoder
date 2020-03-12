#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> a;
    vector<int> b;
    int ai = 0;
    int bi = 0;
    rep(i,n){
        int x;
        cin >> x;
        if(x<0){
            a.push_back(x);
            ai++;
        }else{
            b.push_back(x);
            bi++;
        }
    }
    int y = 0;
    if(k>(ai*bi)){
        k -= (ai * bi);
        y = 1;
        sort(b.begin(), b.end());
        sort(a.rbegin(), a.rend());
    }else{
        sort(b.rbegin(), b.rend());
        sort(a.begin(), a.end());
    }
    ai = 0;
    bi = 0;
    priority_queue<ll, vector<ll>, greater<ll>> que;
    if(y==1){
        if(bi+1<b.size()){
            que.push(b[bi] * b[bi+1]);
        }
        if(ai+1<a.size()){
            que.push(a[ai] * a[ai+1]);
        }
    }else{
        que.push(a[ai] * b[bi]);
        if(bi+1<b.size()){
            que.push(a[ai] * b[bi+1]);
        }
        if(ai+1<a.size()){
            que.push(b[bi] * a[ai+1]);
        }
    }
    k--;
    while(k)
    {
        if(y==1){
            
        }else{

        }
        
    }
}
