#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n, y;
    cin >> n >> y;
    for (int i = n; i >= 0;i--){
        for (int j = n-i; j>=0;j--){
            int k = n - (i + j);
            int tmp = i * 10000 + j * 5000 + k * 1000;
            if (tmp == y)
            {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
            
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}
