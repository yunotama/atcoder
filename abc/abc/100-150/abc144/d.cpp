#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    double a,b,x;
    cin >> a >> b >> x;
    double ans;
    if(x/(a*a)>=b/2){
        ans = atan(2 * (b - x/(a*a)) / a);
    }else{
        ans = atan(b * b * a / (2*x));
    }
    ans =ans/atan(1) * 45;
    printf("%lf\n", ans);
}