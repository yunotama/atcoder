#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int t = n;
    int tmp = 0;
    while(n){
        tmp += n % 10;
        n /= 10;
    }
    if(t % tmp == 0){
        cout << "Yes" << endl;
    }else{

        cout << "No" << endl;
    }
}
