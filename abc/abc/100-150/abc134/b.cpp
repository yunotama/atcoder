#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    d = d * 2 + 1;
    int ans = (n - 1) / d + 1;
    cout << ans << endl;
    
}