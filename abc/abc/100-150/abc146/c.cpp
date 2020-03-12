#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
auto price(ll a,ll b,ll c){
    ll ret = a * c + b * to_string(c).size();
    return ret;
};
int main()
{
    ll a, b, x;
    cin >> a >> b >> x;
    ll left = 0, right = 1e9 + 1;
    while (right - left > 1){
        ll c = (left + right) / 2;
        if(price(a,b,c)<=x)
            left = c;
        else
            right = c;
    }
    cout << left;
}
/*
ll a, b, x;
cin >> a >> b >> x;
ll ans = 0;
ll dig = 1;
ll e[12];
e[0] = 1;
e[1] = 1;
for (int i = 1; i < 11; i++)
{
    e[i + 1] = e[i] * 10;
}
for (int i = 2; i < 12; i++)
{
    if (x - b * i < a * e[i])
    {
        dig = i - 1;
        x = x - b * (i - 1);
        break;
    }
}
for (int i = e[dig]; i < e[dig + 1]; i++)
{
    if (x < a * i)
    {
        break;
    }
    else if (x >= a * i)
    {
        ans = i;
    }
    if (i > 1e+9)
    {
        break;
    }
}
cout << ans << endl;
*/