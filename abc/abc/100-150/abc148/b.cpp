#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    string ans;
    rep(i,n){
        ans = ans + s[i] + t[i];
    }
    cout << ans << endl;
}
