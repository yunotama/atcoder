#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(abs(c-a) <= d || (abs(b-a) <=d &&(c-b) <=d)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}