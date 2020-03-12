#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> xy;
    rep(i,n){
            int x,y;
            cin >> x >> y;
            xy.emplace_back(x,y);
    }
    vector<vector<double>> list(n,vector<double>(n));
    double ans=0;
    rep(i,n){
        for(int j=i+1;j<n;j++){
            list[i][j]=sqrt(pow((xy[i].first-xy[j].first),2.0)+pow(xy[i].second-xy[j].second,2.0));
            ans+=list[i][j];          
        }
    }
    ans=ans*2/n;
    printf("%lf\n",ans);
}
/*int sqr (int a){
    return a * a;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> xy(n);
    vector<int> p(n);
    rep(i,n){
        int x,y;
        cin >> x >> y;
        xy[i].first = x;
        xy[i].second = y;
        p[i] = i;
    }
    double ans = 0;
    do {
        for (int i = 0; i+1 < n;++i){
            int cur = sqr(xy[p[i + 1]].first - xy[p[i]].first) + sqr(xy[p[i + 1]].second - xy[p[i]].second);
            ans += sqrt(cur);
        }
    } while (next_permutation(p.begin(), p.end()));
    int tmp = 1;
    rep(i,n){
        tmp *= i + 1;
    }
    ans /= tmp;
    printf("%lf\n",ans);
}
*\