#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a==b && b!=c){
        cout << "Yes" << endl;
    }else if (a == c && b!= a) {
        cout << "Yes" << endl;
    }else if(b == c && a != b) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
