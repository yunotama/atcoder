#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    const double rate = 380000.0;
    int n;
    cin >> n;
    double ans = 0;
    rep(i, n)
    {
        double x;
        string u;
        cin >> x >> u;
        ans += (u == "JPY") ? x : x * rate;
    }
    printf("%lf", ans);
    return 0;
}
