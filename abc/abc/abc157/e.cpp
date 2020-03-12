#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,q;
    string s;
    cin >> n >> s >> q;
    vector<set<int>> is(26);
    rep(i, n) is[s[i] - 'a'].insert(i);
    rep(qi,q){
        int type;
        cin >> type;
        if(type == 1){
            int a;
            char b;
            cin >> a >> b;
            a--;
            is[s[a] - 'a'].erase(a);
            s[a] = b;
            is[s[a] - 'a'].insert(a);
        }else{
            int l,r;
            cin >> l >> r;
            l--;
            int ans = 0;
            rep(i,26){
                auto it = is[i].lower_bound(l);
                if (it != is[i].end() && *it < r)
                    ++ans;   
            }
            printf("%d\n", ans);
        }
    }
    return 0;
}
