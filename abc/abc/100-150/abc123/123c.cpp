#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    ll n;
    vector<ll> a(5);
    cin >> n;
    ll tmp = 1000000000000005;
    rep(i,5){
        cin >> a[i];
        tmp = min(a[i], tmp);
    }
    cout << 5 + (n-1) / tmp << endl;
}