#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n;i++)
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.size();
    int cnt = 0;
    rep(i, len / 2){
        if(s[i]!=s[len-i-1]){
            cnt++;
        }
    }
    cout << cnt << endl;
}