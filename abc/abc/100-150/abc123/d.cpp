#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
vector<int> a,b, c;
int main()
{
    int x, y, z;
    int k;
    cin >> x >> y >> z;
    cin >> k;
    vector<ll> a(x), b(y), c(z);
    rep(i, x) cin >> a[i];
    rep(i, y) cin >> b[i];
    rep(i, z) cin >> c[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(c.begin(), c.end());
    vector<ll> abc;
    rep(l,x){
        rep(m,y){
            if((l+1)*(m+1)>k)
                break;
            rep(n,z){
                if ((l + 1) * (m + 1) * (n+1)>k)
                    break;
                abc.push_back(a[l] + b[m] + c[n]);
            }
        }
    }
    sort(abc.begin(), abc.end());
    reverse(abc.begin(), abc.end());
    rep(i,k){
        cout << abc[i] << endl;
    }

}
/*    int x, y, z, k;
    cin >> x >> y >> z >> k;

    int A, B, C;
    rep(i,x){
        cin >> A;
        a.push_back(A);
    }
    rep(i,y){
        cin >> B;
        b.push_back(B);
    }
    rep(i,z){
        cin >> C;
        c.push_back(C);
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());
    priority_queue<tuple<ll,int,int,int>> Q;
    Q.push({a[0] + b[0] + c[0],0,0,0});
    int mp[x][y][z] = {};
    rep(i,k){
        tuple tmp = Q.top();
        Q.pop();
        cout << get<0>(tmp) << endl;
        int l=get<1>(tmp), m=get<2>(tmp), n=get<3>(tmp);
        if(!list[l+1][m][n]){
            Q.push({a[l + 1] + b[m] + c[n],l+1,m,n});
            list[l + 1][m][n]++;
        }               
        if(!list[l][m+1][n]){
            Q.push({a[l] + b[m + 1] + c[n],l,m+1,n});
            list[l][m + 1][n]++;
        }               
        if(!list[l][m][n+1]){
            Q.push({a[l] + b[m] + c[n+1],l,m,n+1});
            list[l][m][n+1]++;
        }               
    }
    */
