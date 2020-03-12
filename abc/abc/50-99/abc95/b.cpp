#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,x;
    cin >> n >> x;
    vector<int> m(n);
    int sum = 0;
    rep(i,n){
        cin >> m[i];
        sum += m[i];
    }
    sort(m.begin(), m.end());
    int ans = n;
    x -= sum;
    ans += (x / m[0]);
    cout << ans << endl;
}
