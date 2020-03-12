#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    vector<string> word = {{"maerd"}, {"remaerd"}, {"resare"}, {"esare"}};
    string s;
    cin >> s;
    int len = s.size();
    reverse(s.begin(), s.end());
    int ans = 0;
    bool can = true;
    for (int i = 0; i < s.size();i++){
        string tmp="";
        rep(j,5)tmp += s[i+j];
        i += 4;
        if(tmp==word[0]||tmp==word[3]){
            continue;
        }
        i++;
        tmp += s[i];
        if(tmp==word[2])
            continue;
        i++;
        tmp += s[i];
        if(tmp==word[1])
            continue;
        can = false;
        break;
    }
    if(can){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}