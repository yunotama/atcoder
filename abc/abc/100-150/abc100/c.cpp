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
    int cnt = 0;
    rep(i,n){
        cin >> a[i];
        while(a[i]%2==0){
            cnt++;
            a[i] /= 2;
        }
    }
    cout << cnt << endl;
}
