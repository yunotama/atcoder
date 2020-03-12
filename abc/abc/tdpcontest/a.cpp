#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> dp(100000);
    dp[0] = 1;
    rep(i, n)
    {
        cin >> p[i];
    }
    for (auto e : p)
    {
        for (int i = 99999; i - e >= 0; i--)
        {
            if (dp[i - e] == 0)
                continue;
            dp[i] = 1;
        }
    }
    int cnt = count(dp.begin(), dp.end(), 1);
    cout << cnt << endl;
}