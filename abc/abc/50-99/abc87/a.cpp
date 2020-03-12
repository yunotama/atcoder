#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int x,a,b;
    cin >> x >> a >> b;
    x -= a;
    x %= b;
    cout << x << endl;
}
