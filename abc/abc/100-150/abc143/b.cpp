#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> d(n);
    vector<int> list;
    rep(i, n) cin >> d[i];
    int s = 0;
    int ans = 0;
    rep(i, n){ 
        ans += d[n-i-1] * s;
        s += d[n-i-1];
        }
    cout << ans << endl;
}