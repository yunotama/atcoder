#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    rep(i, n) sort(s[i].begin(), s[i].end());
    sort(s.begin(), s.end());

    long long ans = 0, cnt = 0;
    rep(i,n-1){
        if(s[i]==s[i+1]){
            cnt++;
            ans += cnt;
        }else
            cnt = 0;
    }
    cout << ans << endl;

}