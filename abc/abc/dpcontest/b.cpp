#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    rep(i, n)
    {
        cin >> h[i];
    }
       vector<int> dp(n + 4, 1'000'000'007);
    dp[0] = 0;
    rep(i, n)
    {
        if (dp[i] == 1'000'000'007)
            continue;
        for (int j = 1; j <= k; j++)
        {
            if(i+j<n){
                dp[i + j] = min(dp[i + j], dp[i] + abs(h[i + j] - h[i]));
            }
        }
    }
    cout << dp[n - 1] << endl;
}

