#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n), q(n),x(n);
    rep(i,n){
        cin >> p[i];
    }
    rep(i,n){
        cin >> q[i];
    }
    rep(i,n){
        x[i] = i + 1;
    }
    int a, b,cnt=0;
    do{
        bool flag1 = true,flag2 = true;
        cnt++;
        rep(i,n){
            if(p[i]!=x[i]){
                flag1 = false;
            }
        }
        rep(i,n){
            if(q[i]!=x[i]){
                flag2 = false;
            }
        }
        if(flag1){
            a = cnt;
        }
        if(flag2){
            b = cnt;
        }


    } while (next_permutation(x.begin(), x.end()));
    cout << abs(b - a) << endl;
}
