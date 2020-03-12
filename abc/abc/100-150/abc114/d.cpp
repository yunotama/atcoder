#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
struct Sieve
{
    int n;
    vector<int> f, primes;
    Sieve(int n = 1) : n(n), f(n + 1)
    {
        f[0] = f[1] = -1;
        for (int i = 2; i <= n; i++)
        {
            if (f[i])
                continue;
            primes.push_back(i);
            f[i] = i;
            for (ll j = i * i; j <= n; j += i)
                if (!f[j])
                    f[j] = i;
        }
    }
    bool isPrime(int x)
    {
        return f[x] == x;
    }
    vector<int> factorList(int x)
    {
        vector<int> res;
        while (x != 1)
        {
            res.push_back(f[x]);
            x /= f[x];
        }
        return res;
    }
    vector<pair<int, int>> factor(int x)
    {
        vector<int> fl = factorList(x);
        if (fl.size() == 0)
            return {};
        vector<pair<int, int>> res(1, pair<int, int>(fl[0], 0));
        for (int p : fl)
        {
            if (res.back().first == p)
            {
                res.back().second++;
            }
            else
            {
                res.emplace_back(p, 1);
            }
        }
        return res;
    }
};
int main()
{
    Sieve sieve(100);
    int n;
    cin >> n;

    vector<int> mp(n+1);
    for (int i = 1; i <= n;i++)
    {
        auto f = sieve.factor(i);
        for(auto p:f){
            mp[p.first] += p.second;
        }
    }
    int cnt2 = 0,cnt4 = 0,cnt14=0,cnt24=0,cnt74=0;
    for (int i = 1; i <= n;i++){
        if(mp[i]>=2){
            cnt2++;
        }
        if(mp[i]>=4){
            cnt4++;
        }
        if(mp[i]>=14){
            cnt14++;
        }
        if(mp[i]>=24){
            cnt24++;
        }
        if(mp[i]>=74){
            cnt74++;
        }
    }
    int ans = 0;
    ans += (cnt2-cnt4) * cnt4 * (cnt4 - 1) / 2;
    ans += (cnt4) * (cnt4 - 1) * (cnt4 - 2) / 2;
    ans += (cnt2 - cnt24) * cnt24;
    ans += (cnt24) * (cnt24 - 1);
    ans += (cnt4 - cnt14) * (cnt14);
    ans += (cnt14) * (cnt14 - 1);
    ans += (cnt74);
    cout << ans << endl;
}
