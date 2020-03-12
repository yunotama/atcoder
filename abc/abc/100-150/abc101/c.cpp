#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    int x;
    rep(i,n){
        cin >> a[i];
        if (a[i] == 1){
            x = i;
        }
    }
    cout << (n - 1 + k - 2) / (k - 1) << endl;
} 
