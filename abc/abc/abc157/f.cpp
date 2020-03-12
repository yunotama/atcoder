#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,p;
    cin >> n >> p;
    string s;
    cin >> s;
    vector<int> amari(n),keta(n);
    int a = 1;
    rep(i,n){
        amari[i] = (s[i] - '0') % p;
        keta[i] = a % p;
        a *= 10;
    }
    

}
