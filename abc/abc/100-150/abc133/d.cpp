#include <bits/stdc++.h>
#define rep(i, n) for (long i = 0; i < (n); i++)
using namespace std;
int main()
{
    long n;
    cin >> n;
    vector<long> a(n);
    long all = 0;
    long ans[n]={0};
    rep(i, n){
        cin >> a[i];
        all += a[i];
        if (i % 2 != 0)
            ans[0] += a[i];
    }
    ans[0] = all - 2 * ans[0];
    cout << ans[0] <<' ';
    rep(i,n-1){
        ans[i + 1] = 2 * a[i] - ans[i];
        cout << ans[i + 1] << ' ';
    }
    cout << endl;
}