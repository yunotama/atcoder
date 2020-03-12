#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i,n){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int ans = 100000000, tmp;
    for (int i = 1; i <= 100;i++)
    {
        tmp = 0;
        rep(j,n){
            tmp += (x[j] - i)*(x[j] - i);
        }
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}
