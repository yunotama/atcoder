#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>> td;
    rep(i,n){
        int t, d;
        cin >> t >> d;
        td.emplace_back(d, t);
    }
    sort(td.begin(), td.end(),greater<pair<int,int>>());
    
    
}
