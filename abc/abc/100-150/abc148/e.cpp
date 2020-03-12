#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
long long kansu(long long x){
    if (x<2){
        return 1;
    }else{
        return x * kansu(x - 2);
    }
}
int main()
{
    long long n;
    long long n1;
    long long n2;
    cin >> n;
    n1 = n/10;
    n2 = n / 10;
    if(n%2==1){
        cout << 0 << endl;
        return 0;
    }
    long long ans2 = 0;
    long long ans = 0;
    long long ans1 = 0;
    rep(i,40){
        n1 /= 5;
        n /= 10;
        n2 /= 10;
        ans2 += n2;
        ans1 += n1;
        ans += n;
    }
    cout << ans-ans2+ans1<< endl;
}
