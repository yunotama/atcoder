#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    rep(i,n-2){
        string k;
        rep(j,3){
            k += s[i + j];
        }
        if ("ABC" == k)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
