#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> list(n+1),list2(n + 1);
    int ans1 = 0, ans2 = 0;
    rep(i,m){
        int p;
        string s;
        cin >> p >> s;
        if(s=="AC"){
            if(!list[p]){
                ans1++;
                list[p]++;
            }
        }else{
            if(!list[p])
            list2[p]++;
        }
    }
    rep(i,n){
        if(list[i+1]){
            ans2 += list2[i + 1];
        }
    }
    cout << ans1 << ' ' << ans2 << endl;
}
