#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
        a[i] = a[i]/2;
    }
    int l = 0;
    int b=a[0];
    while(b%2==0){
        l++;
        b /= 2;
    }
    rep(i,n-1){
        int x=0;
        b = a[i + 1];
        while (b % 2 == 0)
        {
            x++;
            b /= 2;
        }
        if (x!= l)
        {
            cout << 0 << endl;
            return 0;
        }
    }
    ll g = a[0];
    rep(i,n-1){
        int r = __gcd(g, (ll)a[i + 1]);
        g = g * a[i + 1] / r;
    }
    int ans = 0;
    ans = (m / g + 1) / 2;
    cout << ans << endl;
}
