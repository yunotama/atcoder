#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 1;
    rep(i, n-1){
        if(s[i]!=s[i+1])
            cnt++;
    }
    cout << cnt << endl;
}