#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i<(n);i++)
using namespace std;
int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if(s[0]==s[1]&&s[2]==s[3]&&s[1]!=s[2]){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}