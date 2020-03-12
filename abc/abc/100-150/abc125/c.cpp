#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    vector<int> left(n), right(n);
    left[0] = a[0];
    right[n-1] = a[n - 1];
    rep(i,n-1){
        left[i + 1] = __gcd(left[i], a[i + 1]);
        right[n - 2 - i] = __gcd(right[n - 1 - i], a[n - 2 - i]);
    }
    int ans = 1;
    rep(i,n){
        if(i==0 || i == n-1){
            ans = max(ans, left[n - 2]);
            ans = max(ans, right[1]);
        }else{
            int g = __gcd(left[i - 1], right[i + 1]);
            ans = max(ans, g);
        }
    }
    cout << ans << endl;
}
