#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    priority_queue<int> A;
    rep(i,n){
        int a;
        cin >> a;
        A.push(a);
    }
    rep(i,m){
        int a = A.top();
        A.pop();
        A.push(a / 2);
    }
    long long ans = 0;
    rep(i,n){
        ans += A.top();
        A.pop();
    }
    cout << ans << endl;
    }