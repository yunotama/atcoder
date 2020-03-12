#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n;i++)
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> t(n);
    rep(i,n){
        int a;
        cin >>a;
        rep(j, a){
            int x, y;
            cin >> x >> y;
            x--;
            t[i].emplace_back(x, y);
        }
    }
    int num = 0, ans = 0;
    rep(i,1<<n){
        bool possible = true;
        num = 0;
        rep(m,n)
            num += (i >> m) & 1;
        rep(j,n){
            //j番目が正直者、正直者の発言のみ考慮すればよい。
            if(i>>j&1){
                rep(k,t[j].size()){
                    if(t[j][k].second==(i>>(t[j][k].first)&1))
                        continue;//証言と一致
                    else{
                        possible = false;
                        break;//証言と不一致矛盾
                    }
                }
            }
        }
        if (possible){
            ans =max(ans, num);
        }
    }
    cout << ans << endl;
}