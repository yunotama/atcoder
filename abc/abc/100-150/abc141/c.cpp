#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    int a[n]={0};
    rep(i,q){
        int b;
        cin >> b;
        b--;
        a[b]++;
    }
    rep(i,n){
        if(k-q+a[i]<=0)
            cout << "No" << endl;
        else {
            cout << "Yes" << endl;
        }
    }
}