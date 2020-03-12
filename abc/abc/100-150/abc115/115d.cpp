#include <bits/stdc++.h>
using namespace std;
long h[51], p[51];
long meat(int level, long eat)
{
    if (level == 0)
        return 1;
    if (eat == 1)
    {
        return 0;
    }
    if (eat <= h[level - 1] + 1)
    {
        return meat(level - 1, eat - 1);
    }
    if (eat == h[level - 1] + 2)
    {
        return p[level - 1] + 1;
    }
    if (eat <= 2 * (h[level - 1] + 1))
    {
        return p[level - 1] + 1 + meat(level - 1, eat - h[level - 1] - 2);
    }
    return 2 * p[level - 1] + 1;
}
int main()
{
    int n;
    long x;
    cin >> n >> x;
 
    h[0] = 1;
    p[0] = 1;
    for (int i = 1; i < n; i++){
        h[i] = 2 * h[i - 1] + 3;
        p[i] = 2 * p[i - 1] + 1;
    }
    cout << meat(n, x) << endl;
}
