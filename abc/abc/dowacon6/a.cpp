#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> t(n);
    rep(i,n){
        cin >> s[i] >> t[i];
    }
    string x;
    cin >> x;
    int tmp;
    rep(i,n){
        if(s[i] == x){
            tmp = i;
        }
    }
    int ans = 0;
    for (int i = tmp + 1; i < n;i++){
        ans += t[i];
    }
    cout << ans << endl;
}
