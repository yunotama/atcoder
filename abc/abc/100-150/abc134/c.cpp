#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n+2);
    a[0] = 0;
    a[n + 1] = 0;
    rep(i, n) cin >> a[i+1];
    vector<int> list1(n + 2), list2(n + 2);
    list1[0] = 0;
    list1[n + 1] = 0;
    list2[0] = 0;
    list2[n + 1] = 0;
    rep(i,n){
        list1[i + 1] = max(list1[i], a[i+1]);
        list2[n - i] = max(list2[n + 1 - i], a[n - i]);
    }
    rep(i,n){
        int ans = max(list1[i], list2[i + 2]);
        cout << ans << endl;
    }
}