#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    auto it1 = lower_bound(a.begin(), a.end(), a[n - 1]/2);
    auto it2 = it1-1;
    cout << a[n - 1] << endl;
    if(*it2 < (a[n-1]-*it1)){
        swap(it2, it1);
    }
    cout << *it2 << endl;
}
