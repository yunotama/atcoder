#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> list(m);
    rep(i,n){
        int k;
        cin >> k;
        rep(j,k){
            int a;
            cin >> a;
            a--;
            list[a]++;
        }
    }
    int cnt = 0;
    rep(i,m){
        if(list[i]==n)
            cnt++;
    }
    cout << cnt << endl;
}
