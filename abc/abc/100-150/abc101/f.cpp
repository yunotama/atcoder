#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    string s;
    cin >> s;
    int n = 0;
    rep(i,s.size()){
        n += (',' - s[i]);
    }
    cout << n << endl;
}
