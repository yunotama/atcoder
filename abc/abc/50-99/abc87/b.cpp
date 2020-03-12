#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int ans = 0;
    int tmp = 0;
    rep(i,a+1){
        rep(j,b+1){
            rep(k,c+1){
                tmp = 0;
                tmp =i*500+j*100+k*50;
                if(tmp == x){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}
