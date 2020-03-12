#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n, k, s;
    cin >> n >> k >> s;
    vector<int> ans;
    rep(i,k){
        ans.push_back(s);
    }
    if(s!=1'000'000'000){
        rep(i,n-k){
        ans.push_back(1'000'000'000);
        }
    }else{
        rep(i,n-k){
            ans.push_back(999'999'999);
        }
    }
    rep(i,n){
        cout << ans[i] << ' ';
    }
    cout << endl;
}
