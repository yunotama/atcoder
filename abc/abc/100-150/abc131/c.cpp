#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, c, d;
    long long ans=0;
    cin >> a >> b >> c >> d;
    ans += (b/c - (a - 1)/c);
    ans += (b/d - (a - 1)/d);
    long long k;
    long long r;
    r = c * d;
    if(d>c)
        swap(d, c);
    while(k=c%d){
        c = d;
        d = k;
    }
    r = r / d;
    ans -= (b/r - (a - 1)/r);
    ans = (b - a + 1) - ans;
    cout << ans << endl;
}
