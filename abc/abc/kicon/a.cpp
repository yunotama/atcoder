#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int h,w,n;
    cin >> h >> w >> n;
    int num = max(h, w);
    int ans = (n+num-1) / num;
    cout << ans << endl;

}
