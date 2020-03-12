#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    string s = "hi";
    string t;
    cin >> t;
    rep(i,5){
        if(t == s){
            cout << "Yes" << endl;
            return 0;
        }
        s += s;
    }
    cout << "No" << endl;
}
