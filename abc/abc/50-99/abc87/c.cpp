#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(2, vector<int>(n));
    rep(j,2){
    rep(i,n){
        cin >> a[j][i];
    }
    }
    int ans = 0;
    rep(i,n){
        int tmp = 0;
        int cur = 0;
        rep(j,n){
            tmp += a[cur][j];
            if(j==i){
                cur++;
                tmp += a[cur][j];
            }
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}
