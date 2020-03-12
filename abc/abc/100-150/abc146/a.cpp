#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    vector<string> si = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    string s;
    int ans=7;
    cin >> s;
    rep(i,7){
        if (si[i] == s){
            ans -= i;
        }
    }
    cout << ans << endl;
}
