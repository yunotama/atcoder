#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    long long g = __gcd(a, b);
    g = a * b / g;
    cout << g << endl;
}
