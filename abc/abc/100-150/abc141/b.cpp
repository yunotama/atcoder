#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i+=2)
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    rep(i,s.size()){
        if(s[i]=='L'){
            cout << "No" << endl;
            cnt++;
            break;
        }
        if (s[i + 1] == 'R'){
            cout << "No" << endl;
            cnt++;
            break;
        }
    }
    if(cnt==0)
        cout << "Yes" << endl;

}