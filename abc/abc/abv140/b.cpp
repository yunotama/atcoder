#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n;i++)
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n - 1);
    rep(i, n){
        cin >> a[i];
        a[i]--;
    }
    rep(i, n) cin >> b[i];
    rep(i, n-1) cin >> c[i];
    int ans = b[a[0]];
    rep(i,n-1){
        ans += b[a[i + 1]];
        if(a[i+1]-1==a[i])
            ans += c[a[i]];
    }
    cout << ans << endl;
}