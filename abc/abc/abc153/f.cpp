#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define inf 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,d,a;
    cin >> n >> d >> a;
    vector<pair<ll,ll>> xh(n);
    rep(i,n){
        cin >> xh[i].first >> xh[i].second;
    }
    sort(xh.begin(), xh.end());
    ll cnt = 0;
    ll left=0, right=-1;
    ll dame;
    ll bomb = 0;
    rep(i, n)
    {
        left = xh[i].first;
        if (left <= xh[j].first)
        {
                xh[i].second = max((ll)0, xh[i].second - xh[j].second);
        }
        if (xh[i].second <= 0){
            continue;
        }
        right = left + 2 * d;
        bomb = (xh[i].second + a - 1) / a;
        dame = bomb * a;
        xh[i].first = right;
        xh[i].second = dame;
        cnt += bomb;
    }
    cout << cnt << endl;
}
