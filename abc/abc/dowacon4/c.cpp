#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
const int mod = 1000000007;
struct mint
{
    ll x;
    mint(ll x = 0) : x((x % mod + mod) % mod) {}
    mint operator-() const { return mint(-x); }
    mint &operator+=(const mint a)
    {
        if ((x += a.x) >= mod)
            x -= mod;
        return *this;
    }
    mint &operator-=(const mint a)
    {
        if ((x += mod - a.x) >= mod)
            x -= mod;
        return *this;
    }
    mint &operator*=(const mint a)
    {
        (x *= a.x) %= mod;
        return *this;
    }
    mint operator+(const mint a) const
    {
        mint res(*this);
        return res += a;
    }
    mint operator-(const mint a) const
    {
        mint res(*this);
        return res -= a;
    }
    mint operator*(const mint a) const
    {
        mint res(*this);
        return res *= a;
    }
    mint pow(ll t) const
    {
        if (!t)
            return 1;
        mint a = pow(t >> 1);
        a *= a;
        if (t & 1)
            a *= *this;
        return a;
    }
    mint inv() const
    {

        return pow(mod - 2);
    }
    mint &operator/=(const mint a)
    {
        return (*this) *= a.inv();
    }
    mint operator/(const mint a) const
    {
        mint res(*this);
        return res /= a;
    }
};
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n+1),b(m+1);
    int suma = 0, sumb = 0;
    int cnta = 0, cntb = 0;
    a[0] = 100000;
    int ka[101] = {};
    int kb[101] = {};
    rep(i, n)
    {
        cin >> a[i + 1];
        suma += a[i + 1];
        if (a[i] != a[i + 1])
        {
            cnta++;
        }
        ka[cnta-1]++;
    }
    rep(i,m){
        cin >> b[i];
        sumb += b[i];
        if(b[i] != b[i+1]){
            cntb++;
        }
        kb[cntb-1]++;
    }
    int dpa[cnta][1005] = {{}};
    int dpb[cntb][1005] = {{}};



}
