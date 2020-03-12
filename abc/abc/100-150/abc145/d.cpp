#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int mod = 1000000007;
long long powmod(long long a,long long m){
    long long ret = 1;
    while (m>0){
        if(m&1)
            ret = ret * a % mod;
        a = a * a % mod;
        m >>= 1;
    }
    return ret;
}
int main()
{
    long long x,y;
    cin >> x >> y;
    if(x<y)
        swap(x, y);
    if((x+y)%3!=0||2*y-x<=0){
        cout << 1 << endl;
        cout << 0 << endl;
    }else{
    long long n, m;
    n = (2 * x - y) / 3;
    m = (2 * y - x) / 3;
    long long k = 1, km = 1;
    for (int i = 1; i <= m; i++)
    {
        k = k*(n + i)%mod;
        km = km*i%mod;
    }
    long long ans = k * powmod(km, mod - 2)%mod;
    cout<< ans << endl;
}
}
