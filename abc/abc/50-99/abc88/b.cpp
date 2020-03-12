#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    int ans[2] = {};
    rep(i,n){
        ans[i % 2] += a[i];
    }
    cout << (ans[0] - ans[1]) << endl;
}
