#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int k = 1;
    rep(i,len-1){
        k *= 2;
    }
    ll ans = 0;
    rep(i,k){
        int x = i;
        ll tmp = s[0]-'0';
        rep(j,len-1){
            int r = x % 2;
            x /= 2;
            if(r == 0){
                tmp *= 10;
                tmp += (s[j + 1]-'0');
            }else{
                ans += tmp;
                tmp = s[j + 1]-'0';
            }
        }
        ans += tmp;
    }
    cout << ans << endl;
}
