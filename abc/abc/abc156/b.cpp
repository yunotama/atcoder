#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,k;
    cin >> n >> k;
    int cnt = 0;
    while(n){
        n /= k;
        cnt++;
    }
    cout << cnt << endl;
}
