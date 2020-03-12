#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int a,b;
    cin >> a >> b;
    string s = to_string(a);
    s += to_string(b);
    int x = stoi(s);
    int c = sqrt(x);
    if(c == sqrt(x)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
