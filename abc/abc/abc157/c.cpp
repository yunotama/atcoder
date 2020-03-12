#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> s(m), c(m);
    rep(i,m){
        cin >> s[i] >> c[i];
    }
    bool flag = false;
    int a = 1;
    rep(i,n-1){
        a *= 10;
    }
    int b = a;
    if(a==1){
        a = 0;
    }
    for (int i = a; i < b * 10;i++){
        string str = to_string(i);
        bool tmp = true;
        rep(j,m){
            if(str[(s[j]-1)] != c[j] + '0'){
                tmp = false;
            } 
        }
        if(tmp){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
