#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define inf 10000000000
using namespace std;
using ll = long long;
int main()
{
    int h,n;
    cin >> h >> n;
    ll a = 0;
    rep(i,n){
        int b;
        cin >> b;
        a += b;
    }
    if(a>=h){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
