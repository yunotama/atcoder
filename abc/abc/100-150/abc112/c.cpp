#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<ll> x(n), y(n), h(n);
    rep(i,n){
        cin >> x[i] >> y[i] >> h[i];
    }
    rep(i,101){
        rep(j,101){
            bool flag = true;
            ll H = 0;
            rep(k,n){
                if(h[k]!=(ll)0)H=h[k]+abs(i-x[k])+abs(j-y[k]);
                break;
            }
            rep(k,n){
                ll tmp = max(H - abs(i - x[k]) - abs(j - y[k]), (ll)0);
                if (h[k] != tmp)
                {
                    flag = false;
                    break;
                }                
            }
            if(flag){
                cout << i << ' ' << j << ' ' << H << endl;
                return 0;
            }
        }
    }
    
}
