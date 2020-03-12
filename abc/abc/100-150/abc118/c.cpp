#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int s = 0;
    rep(i,n){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans= a[0];
    rep(i, n - 1){
        ans = min(ans, __gcd(a[i + 1], ans));
    }
    cout << ans << endl;
}
