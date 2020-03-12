#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> dif(m-1),x(m);
    rep(i,m){
        cin >> x[i];
    }
    if (m <= n)
    {
        cout << 0 << endl;
        return 0;
    }
    sort(x.begin(), x.end());
    rep(i,m-1){
        dif[i] = x[i + 1] - x[i];
    }
    sort(dif.begin(), dif.end());
    int ans = 0;
    rep(i,m-n){
        ans += dif[i];
    }
    cout << ans << endl;
}
