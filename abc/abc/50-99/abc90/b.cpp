#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b;i++){
        string s;
        s = to_string(i);
        string t = s;
        reverse(s.begin(), s.end());
        if(s == t){
            cnt++;
        }
    }
    cout << cnt << endl;
}
