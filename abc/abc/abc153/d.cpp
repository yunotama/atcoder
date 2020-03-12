#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define inf 10000000000
using namespace std;
using ll = long long;
int main()
{
    ll h;
    cin >> h;
    ll cnt = 1;
    ll ans = 1;
    h /= 2;
    while(h){
        h /= 2;
        cnt *= 2;
        ans += cnt;
    }
    cout << ans << endl;
}
