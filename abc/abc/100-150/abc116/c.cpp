#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    int H = 0;
    rep(i, n){
        cin >> h[i];
        H = max(h[i], H);
    }
    int cnt = 0;
    rep(i,H){
        int tmp = 0;
        rep(j,n){
            if(h[j]==0){
                if(tmp !=0){
                    cnt++;
                }
                tmp = 0;
            }else{
                tmp = h[j];
                h[j]--;
            }
        }
        if(tmp!=0)
            cnt++;
    }
    cout << cnt << endl;
}
