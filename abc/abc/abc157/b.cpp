#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int a[3][3];
    rep(i,3){
        rep(j,3){
            cin >> a[i][j];
        }
    }
    int n;
    cin >> n;
    vector<int> b(n);
    rep(i,n){
        cin >> b[i];
    }
    rep(i,n){
        rep(j,3){
            rep(k,3){
                if(a[j][k]==b[i]){
                    a[j][k] = 0;
                }
            }
        }
    }
    bool flag = false;
    rep(i,3){
        if (a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0){
            flag = true;
        }
    }
    rep(i,3){
        if (a[0][i] == 0 && a[1][i] == 0 && a[2][i] == 0){
            flag = true;
        }
    }
    if(a[1][1] == 0 && a[2][2] == 0 && a[0][0] == 0){
        flag = true;
    }
    if(a[0][2] == 0 && a[1][1] == 0 && a[2][0] == 0){
        flag = true;
    }
    if(flag) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
