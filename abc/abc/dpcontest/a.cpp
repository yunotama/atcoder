#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n){
        cin >> h[i];
    }
    vector<int> dp(n+4,1'000'000'007);
    dp[1] = abs(h[1] - h[0]);
    dp[2] = abs(h[2] - h[0]);
    rep(i, n)
    {
        if (dp[i] == 1'000'000'007)
            continue;
        dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i + 1] - h[i]));
        dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i + 2] - h[i]));
    }
    cout << dp[n-1] << endl;
}
