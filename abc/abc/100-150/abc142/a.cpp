#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n;i++)
using namespace std;
int main(){
    int n;
    cin >> n;
    double ans;
    ans = n;
    n = (n + 1) / 2;
    ans = n / ans;
    printf("%lf\n", ans);
}