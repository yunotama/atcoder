#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int ans;
    int a, b;
    cin >> a >> b;
    for (ans=0; 1 + ans*(a - 1) < b;ans++)
        ;
    cout << ans << endl;
}