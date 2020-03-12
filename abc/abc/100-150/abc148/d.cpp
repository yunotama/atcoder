#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    int next = 1;
    int tmp = 0;
    bool can = false;
    rep(i,n){
        if(next==a[i]){
            next++;
            can = true;
        }else{
            tmp++;
        }
    }
    if(can){
        cout << tmp << endl;
    }else{
        cout << -1 << endl;
    }

}
