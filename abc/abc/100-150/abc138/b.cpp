#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<double> a(n);
    rep(i, n) cin >> a[i];
    double ue=1;
    double sita = 0;
    rep(i, n) ue *= a[i];
    rep(i, n) sita += ue / a[i];
    printf("%lf\n",ue / sita);
}