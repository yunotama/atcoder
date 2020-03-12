#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool can = true;
    if(n%2==1){
        can = false;
    }else{
        rep(i,n/2){
            if(s[i]!=s[i+n/2]) {
                can = false;
                break;
            }
        }
    }
    if (can){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
