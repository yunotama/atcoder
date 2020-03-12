#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n;i++)
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> b(n - 1);
    rep(i, n - 1) cin >> b[i];
    int ans = b[0];
    b.push_back(100005);
    rep(i, n-1) ans += min(b[i],b[i+1]);
    cout << ans << endl;
}