#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int a,b;
    cin >> a >> b;
    cout << max(a + b, max(a - b, a * b)) << endl;
}
