#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n;i++)
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<string> ans = {"Sunny", "Cloudy", "Rainy"};
    rep(i, 3) if (s == ans[i]) cout << ans[(i+1)%3] << endl;
}