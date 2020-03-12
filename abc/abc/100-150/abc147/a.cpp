#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n;i++)
using namespace std;
int main(){
    int ans = 0;
    rep(i, 3) {
        int a;
        cin >> a;
        ans += a;
    }
    if(ans>=22)
        cout << "bust" << endl;
    else
        cout << "win" << endl;
}