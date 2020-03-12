#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> list(n);
    int num = 0;
    rep(i, n) cin >> a[i];
    rep(i, n)
    {
        int tmp = 0;
        for (int j = 0; (n - i) * (1 + j) <= n;j++)
            tmp += list[(n - i) * (1 + j) - 1];
        if (tmp % 2 != a[n - i - 1])
        {
            list[n - i - 1]++;
            num++;
        }
    }
    cout << num << endl;
    rep(i, n) if (list[i]) cout << i + 1 << ' ';
}