#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i, n) cin >> l[i];
    sort(l.begin(), l.end());
    int s = 0;
    rep(i,n-1){
        s += l[i];
    }
    if(l[n-1]<s){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
