#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> list(9, vector<int>(9));
    rep(i, 9) rep(j, 9) list[i][j] = (i + 1) * (j + 1);
    rep(i, 9) rep(j, 9) if (list[i][j] == n) n = 0;
    if(n==0)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
}