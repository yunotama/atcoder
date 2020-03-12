#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    rep(i, n){
        int A;
        cin >> A;
        a[i] = {A, i+1};
    }
    sort(a.begin(),a.end());
    rep(i, n) cout << a[i].second << ' ';
    cout << endl;
}