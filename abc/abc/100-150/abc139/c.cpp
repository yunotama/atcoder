#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    int h[n];
    rep(i, n) cin >> h[i];
    int cnt = 0;
    vector<int> ans;
    rep(now,n){
        if (h[now] >= h[now + 1] && now != n-1)
            cnt++;
        else{
        ans.push_back(cnt);
        cnt = 0;
        }
    }
    sort(ans.begin(), ans.end(), greater<int>());
    cout << ans[0] << endl;
}