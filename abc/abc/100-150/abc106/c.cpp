#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    ll k;
    string s;
    cin >> s;
    cin >> k;
    k--;
    char ans = '1';
    ll tmp = 0;
    rep(i,s.size()){
        if(s[i]>='2'){
            ans = s[i];
            tmp = i;
            break;
        }
    }
    if(k<tmp){
        cout << '1' << endl;
    }else{
        cout << ans << endl;
    }
}
