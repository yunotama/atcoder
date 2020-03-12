#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n,h;
    cin >> n >> h;
    vector<int> a(n), b(n);
    rep(i,n){
        cin >> a[i] >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> v;
    auto it = lower_bound(b.begin(), b.end(), a[n - 1]);
    int cnt = 0;
    for(it; it != b.end();it++){
        v.push_back(*it);
    }
    reverse(v.begin(), v.end());
    for(auto e:v){
        h -= e;
        cnt++;
        if(h<=0){
            cout << cnt << endl;
            return 0;
        }
    }
    cnt += (h + a[n - 1] - 1) / a[n - 1];
    cout << cnt << endl;
    return 0;
}
