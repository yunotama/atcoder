#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> t(n), x(n), y(n);
    rep(i,n){
        cin >> t[i] >> x[i] >> y[i];
    }
    int a = 0, b = 0,c = 0;
    rep(i,n){
        int len = (t[i]-c)-abs(x[i] - a) - abs(y[i] - b);
        if(len%2==0 && len >= 0){
            c = t[i];
            a = x[i];
            b = y[i];
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
