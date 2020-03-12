#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int k;
    cin >> k;
    int ans = a + b + c;
    int tmp = max(a, max(b, c));
    ans -= tmp;
    rep(i,k){
        tmp *= 2;
    }
    ans += tmp;
    cout << ans << endl;
}
