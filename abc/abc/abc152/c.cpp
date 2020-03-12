#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    int tmp = 200005;
    int cnt = 0;
    rep(i,n){
        cin >> p[i];
    }
    rep(i,n){
        if(p[i]<=tmp){
            cnt++;
            tmp = p[i];
        }
    }
    cout << cnt << endl;
}
