#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int cnt = 1;
    vector<int> w;
    int x;
    cin >> x;
    w.push_back(x);
    rep(i,n-1){
        cin >> x;
        sort(w.begin(), w.end());
        bool flag = false;
        for (int j = 0; j < w.size();j++)
        {
            if(w[j]>=x){
                flag = true;
                w[j] = x;
                break;
            }
        }
        if(!flag){
            w.push_back(x);
        }
    }
        cout << w.size() << endl;
}
