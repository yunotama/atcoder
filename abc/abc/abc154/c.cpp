#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    map<int,int> mp;
    rep(i,n){
        int a;
        cin >> a;
        a;
        mp[a]++;
        if(mp[a]!=1){
            cout << "NO" << endl;
            return 0;
        } 
    }
    cout << "YES" << endl;
}
