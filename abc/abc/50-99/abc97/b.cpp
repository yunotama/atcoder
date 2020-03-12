#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int x;
    cin >> x;
    int ans = 1;
    for (int i = 2; i <= x;i++){
        for (int j = 2; j*j <= i;j++){
            int tmp = i;
            while(!(tmp%j)){
                tmp /= j;
            }
            if(tmp==1){
                ans = i;
            }
        }
    }
    cout << ans << endl;
}
