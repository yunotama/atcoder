#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(3);
    rep(i,n){
        string str;
        cin >> setw(3) >> str;
        if(str =="SET"){
            int x, y;
            cin >> x >> y;
            a[x] = y;
        }else if (str == "ADD"){
            int x;
            cin >> x;
            a[2] = a[1] + x;
        }else if (str == "SUB"){
            int x;
            cin >> x;
            a[2] = a[1] - x;
        }
    }
    cout << a[1] << ' ' << a[2] << endl;
}
