#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    long long cnt = 0;
    for (int i = 0; i < n - 1;i++){
        if(a[i]>x){
            cnt += a[i] - x;
            a[i] = x;
        }
        if(a[i]+a[i+1]>x){
            cnt += a[i + 1] - (x - a[i]);
            a[i + 1] = (x - a[i]);
        }
    }
    cout << cnt << endl;
}