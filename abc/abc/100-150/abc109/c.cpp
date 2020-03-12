#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    vector<int> d(n);
    rep(i,n){
        int a;
        cin >> a;
        d[i] = abs(x - a);
    }
    x = d[0];
    rep(i,n-1){
        x = __gcd(x, d[i+1]);
    }
    cout << x << endl;
}