#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    int sum = 0;
    rep(i,n-1){
        int a;
        cin >> a;
        sum += a;
    }
    int ans;
    ans = m * n - sum;
    if(ans > k){
        cout << -1 << endl;
    }else{
        cout << max(ans,0) << endl;
    }
}
