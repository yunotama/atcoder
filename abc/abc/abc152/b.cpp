#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    vector<string> ans;
    string tmp1, tmp2;
    rep(i,b){
        tmp1 += (a + '0');
    }
    rep(i,a){
        tmp2 += (b + '0');
    }
    ans.push_back(tmp2);
    ans.push_back(tmp1);
    sort(ans.begin(), ans.end());
    cout << ans[0] << endl;
}
