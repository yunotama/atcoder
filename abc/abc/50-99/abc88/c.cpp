#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int c[3][3];
    rep(i,3){
        rep(j,3){
            cin >> c[i][j];
        }
    }
    vector<int> v;
    rep(i,3){
        v.push_back(i);
    }
    int tmp[6] = {};
    int cnt = 0;
    do{
        rep(i, 3){
            tmp[cnt] += c[i][v[i]];
        } 
        cnt++;
    } while (next_permutation(v.begin(), v.end()));
    bool flag = true;
    rep(i,5){
        if(tmp[i]!=tmp[i+1]){
            flag = false;
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
