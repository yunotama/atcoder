#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define inf 10000000000
using namespace std;
using ll = long long;
int main()
{
    int h,n;
    cin >> h >> n;
    vector<int> A(n),B(n);
    rep(i,n){
        int a, b;
        cin >> a >> b;
        A[i]=a,B[i]=b;
    }
    vector<ll> dp(h+1, 1'000'000'000'000);
    dp[0] = 0;
    for (int j = 0; j <= h; j++)
    {
        if (dp[j] == 1'000'000'000'000){
            continue;
        }
        rep(i,n){
            if (j + A[i] <= h)
                dp[j + A[i]] = min(dp[j + A[i]], dp[j] + B[i]);
            else{
            dp[h] = min(dp[h], dp[j] + B[i]);
            }
        }
    }
    cout << dp[h] << endl;
}
