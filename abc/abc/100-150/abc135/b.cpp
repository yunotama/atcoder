#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    int cnt=0;
    rep(i, n) if (p[i] != (i + 1)) cnt++;
    if(cnt<3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}