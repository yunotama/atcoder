#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> xl(n);
    rep(i,n){
        int x, l;
        cin >> x >> l;
        xl[i]={x, l};
    }
    sort(xl.begin(), xl.end());
    int cnt=0;
    int right = xl[0].first + xl[0].second;
    int left2,right2;
    rep(i,n-1){
        left2 = xl[i + 1].first - xl[i + 1].second;
        right2 = xl[i + 1].first + xl[i + 1].second;
        if(right > right2){
            right = right2;
            cnt++;
        }else if(right <= left2){
            right = right2;
        }else{
            cnt++;
        }
    }
    cout << (n-cnt) << endl;
}
