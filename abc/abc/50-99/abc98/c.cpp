#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 1000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = 0;
    int ans = INF;
    for (int i = 0; i < n;i++){
        if(s[i]=='E'){
            r++;
        }
    }
    for (int i = 0; i < n;i++){
        if(s[i]=='E')
            r--;
        if(i!=0 && s[i-1] == 'W'){
            l++;
        }
        ans = min(r + l, ans);
    }
    cout << ans << endl;
}
