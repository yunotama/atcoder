#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n / 2), v2(n / 2);
    rep(i, n)
    {
        if (i % 2 == 0)
        {
            cin >> v1[i / 2];
        }
        else
        {
            cin >> v2[i / 2];
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int cnt = 0;
    int max1 = 0, max12 = 0;
    int a1 = 0;
    int tmp = v1[0];
    rep(i, n / 2)
    {
        if (tmp == v1[i])
        {
            cnt++;
        }
        else
        {
            if (max1 <= cnt)
            {
                max12 = max1;
                max1 = cnt;
                a1 = tmp;
            }
            else if (max12 < cnt)
            {
                max12 = cnt;
            }
            cnt = 1;
            tmp = v1[i];
        }
    }
    if (max1 <= cnt)
    {
        max12 = max1;
        max1 = cnt;
        a1 = tmp;
    }
    cnt = 0;
    tmp = v2[0];
    int max2 = 0, max22 = 0;
    int a2 = 0;
    rep(i, n / 2)
    {
        if (tmp == v2[i])
        {
            cnt++;
        }
        else
        {
            if (max2 <= cnt)
            {
                max22 = max2;
                max2 = cnt;
                a2 = tmp;
            }
            else if (max22 < cnt)
            {
                max22 = cnt;
            }
            cnt = 1;
            tmp = v2[i];
        }
    }
    if (max2 <= cnt)
    {
        max22 = max2;
        max2 = cnt;
        a2 = tmp;
    }
    if (a2 != a1)
    {
        cout << n - max2 - max1 << endl;
    }
    else
    {
        cout << min(n - max2 - max12, n - max22 - max1) << endl;
    }
}
