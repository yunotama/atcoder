#include <bits/stdc++.h>
#define rep(i, n) for (long i = 0; i < (n); i++)
using namespace std;
int main()
{
    long l, r;
    cin >> l >> r;
    long mod = 2019;
    r = r - l + 1;
    l = l % mod;
    if (r >= mod || l == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    long list[r];
    rep(i, r) list[i] = (l + i) % mod;
    l = 2019;
    rep(i, r - 1)rep(j, r - i - 1) l = min(l, list[i] * list[i + j + 1]%mod);
    cout << l << endl;

}