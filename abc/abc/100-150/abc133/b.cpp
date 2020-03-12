#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int x[n][d];
    int ans = 0;
    rep(i,n){
        rep(j,d){
            cin >> x[i][j];
        }
    }
    rep(i,n-1){
        rep(j,n-i-1){
            int tmp=0;
            int s;
            rep(k,d){
                s = x[i][k] - x[j + i + 1][k];
                s *= s;
                tmp += s;
            }
            s = sqrt(tmp);
            s *= s;
            if(s==tmp)
                ans++;
        }

    }
    cout << ans << endl;
}