#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{

    int n,m; 
    cin >> n >> m;
    vector<int> a(n), b(n), c(n), w(n);
    int dp[110][110][110] = {};
    rep(i,n){
        cin >> a[i] >> b[i] >> c[i] >> w[i];
    }
    vector<int> x(m), y(m), z(m);
    rep(i,m){
        cin >> x[i] >> y[i] >> z[i];
    }
    rep(r,n){
        dp[a[r]][b[r]][c[r]] = max(w[r], dp[a[r]][b[r]][c[r]]);
    }
    rep(i,109){
        rep(j,109){
            rep(k,109){
                dp[i][j][k + 1] = max(dp[i][j][k], dp[i][j][k + 1]);
                dp[i+1][j][k] = max(dp[i][j][k], dp[i+1][j][k]);
                dp[i][j+1][k] = max(dp[i][j][k], dp[i][j+1][k]);
            }
        }
    }
    rep(r,m){
        cout << dp[x[r]][y[r]][z[r]] << endl;
    }
}
