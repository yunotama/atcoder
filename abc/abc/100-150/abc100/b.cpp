#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int d,n;
    cin >> d >> n;
    int x = 1;
    rep(i,d){
        x *= 100;
    }
    int cnt = 0;
    int ans = 0;
    for (int i = x; cnt != n; i+=x){
        if(i % (x*100) != 0){
            cnt++;
        }
        ans = i;
    }
    cout << ans << endl;
}
