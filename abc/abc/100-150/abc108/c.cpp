#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    ll a = 0, b=0;
    for (int i = 1; i <= n;i++){
        if (i% k == 0){
            a++;
        }
        if(i%k==k/2){
            b++;
        }
    }
    ll ans = 0;
    ans = a * a * a;
    if (k % 2 == 0){
        ans += (b*b*b);
    }
    cout << ans << endl;
}
