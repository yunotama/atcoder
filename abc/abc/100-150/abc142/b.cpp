#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int cnt = 0;
    rep(i,n){
        int h;
        cin >> h;
        if(h>=k)
            cnt++;
    }
    cout << cnt << endl;
}