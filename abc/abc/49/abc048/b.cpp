#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    long long a, b, x;
    cin >> a >> b >> x;
    if (a == 0)
        cout << b / x + 1 << endl;
    else
        cout << b / x - (a - 1) / x << endl;
}