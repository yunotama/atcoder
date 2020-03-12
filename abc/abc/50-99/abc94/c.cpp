#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> x(n),y(n);
    rep(i, n){
        cin >> x[i];
    }
    y = x;
    sort(x.begin(), x.end());
    int a1 = (n-1) / 2;
    int a2 = n / 2;
    rep(i,n){
        if(y[i] <= x[a1]){
            cout << x[a2] << endl;
        }else{
            cout << x[a1] << endl;
        }
    }
}
