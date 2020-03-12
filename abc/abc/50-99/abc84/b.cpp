#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int a,b;
    cin >>a >> b;
    string s;
    cin >> s;
    bool flag = true;
    rep(i,a+b+1){
        if(i == a){
            if(s[i]!= '-'){
                flag = false;
            }
        }else{
            if(s[i]=='-'){
                flag = false;
            }
        }

    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
