#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<double> v(n);
    rep(i,n){
        double p;
        cin >> p;
        p = p * (p + 1) / p / 2;
        v[i] = p;
    }
    vector<double> l(n+1);
    l[0] = 0;
    rep(i,n){
        l[i + 1] = l[i] + v[i];
    }
    double ans = 0;
    rep(i,n-k+1){
        ans = max(ans, l[i + k] - l[i]);
    }
    printf("%lf", ans);
}
