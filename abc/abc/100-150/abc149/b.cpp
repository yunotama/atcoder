#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    ll a, b, k;
    cin >> a >> b >> k;
    cout << max(a - k, (ll)0) << ' ';
    cout << max(b - max(k - a, (ll)0),(ll)0) << endl;
}
