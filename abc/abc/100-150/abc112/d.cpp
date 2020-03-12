#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int end = m / n;
    int ans = 1;
    vector<int> v;
    for (int i = 1; i * i <= m && i <= end; i++)
    {
        if(m%i == 0){
            v.push_back(i);
            if(m/i<=end){
                v.push_back(m / i);
            }
        }
    }
    for (auto e : v){
        int tmp = m - (n - 1) * e;
            if(tmp % e ==0){
                ans = max(ans,e);
            }
    }
    cout << ans << endl;
}
