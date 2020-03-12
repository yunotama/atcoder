#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    if ((b - a) % 2 == 1)
        cout << "IMPOSSIBLE" << endl;
    else
        cout << (b + a) / 2 << endl;
}