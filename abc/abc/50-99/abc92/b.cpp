#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,d,x;
    cin >> n >> d >> x;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    rep(i,d){
        rep(j,n){
            rep(k,100){
                if(i+1 == k*a[j]+1)
                    x++;
            }
        }
    }
    cout << x << endl;
}
