#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>d(n);
    rep(i, n) cin >> d[i];
    sort(d.begin(), d.end());
    int ans;
    ans = d[n / 2] - d[n / 2 - 1];
    cout << ans << endl;
}