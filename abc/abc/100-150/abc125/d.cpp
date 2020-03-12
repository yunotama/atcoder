#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    ll cnt = 0;
    ll tmp = 1000000005;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            cnt++;
        }
        sum += abs(a[i]);
        tmp = min(tmp, abs(a[i]));
    }
    if (cnt % 2 == 0)
    {
        cout << sum << endl;
        return 0;
    }
    cout << (sum - 2 * tmp) << endl;
}