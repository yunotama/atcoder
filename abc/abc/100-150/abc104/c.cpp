#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
int main()
{
    int d, g;
    cin >> d >> g;
    vector<int> v;
    rep(i,d){
        v.push_back(i);
    }
    vector<int> p(d), c(d);
    rep(i,d){
        cin >> p[i] >> c[i];
    }
    int ans = 10000000;
    do{
        int point = 0;
        int cnt = 0;
        for(auto e:v){
            cnt += p[e];
            point += p[e] * (e + 1) * 100 + c[e];
            if(point >= g){
                rep(i,p[e]){
                    if(i == 0){
                        point -= c[e] + (e + 1) * 100;
                    }else{
                        point -= (e + 1) * 100;
                    }
                    if(point < g){
                        break;
                    }
                    cnt--;
                }
                break;
            }
        }
        ans = min(cnt, ans);
        cnt = 0;
    } while (next_permutation(v.begin(), v.end()));
    cout << ans << endl;
}
/*int d,g;
    cin >> d >> g;
    vector<pair<int, int>> pc(d+1);
    queue<pair<int,int>> list;
    list.push(make_pair(g,0));
    for (int i = 1; i <= d;i++){
        int x,y;
        cin >> x >> y;
        pc[i] = make_pair(x, y);
    }
    int ans = 10000;
    int cnt[d+1]={},point = 1;
    cnt[1] = 1;
    while(!list.empty()){
        pair<int,int> next = list.front();
        list.pop();
        cnt[point]--;
        int goal=next.first;
        for (int i = 0; i <= pc[point].first; i++)
        {
            
            if(i)
                goal -= 100 * point;
            if(i==pc[point].first)
                goal -= pc[point].second;
            if(goal <= 0){
                ans = min(ans, next.second + i);
                break;
            }else{
                list.push(make_pair(goal, i+next.second));
                cnt[point+1]++;
            }
        }
        if(!cnt[point]){
            point++;
        }
        if(point>d){
            break;
        }
    }
    cout << ans << endl;
    */
