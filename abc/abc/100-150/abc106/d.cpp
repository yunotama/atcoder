#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using namespace std;
ll INF = 10000000000;
int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> mp(n,vector<int>(n));
    rep(i,m){
        int l, r;
        cin >> l >> r;
        mp[l-1][r-1]++;
    }
    vector<int> ans(q);
    rep(i,q){
        int x, y;
        cin >> x >> y;
        if(x > y){
            swap(x, y);
        }
        for (int j = x - 1; j < y;j++)
        {
            for(int k = x - 1 ;k < y ; k++){
                ans[i] += mp[j][k];
            }
        }
    }
    rep(i,q){
        cout << ans[i] << endl;
    }

}
