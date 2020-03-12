#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = 10000;
    rep(i, n - 2){
        string t;
        rep(j,3){
            t += s[i + j];
        }
        ans = min(abs(753 - stoi(t)), ans);
    }
    cout << ans << endl;

}
