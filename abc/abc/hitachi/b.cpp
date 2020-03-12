#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 1000000000
using namespace std;
using ll = long long;
int main()
{
    int A,B,M;
    cin >> A >> B >> M;
    vector<int> a(A), b(B), x(M), y(M), c(M);
    int mina=INF, minb=INF;
    rep(i,A){
        cin >> a[i];
        mina = min(mina, a[i]);
    }
    rep(i,B){
        cin >> b[i];
        minb = min(minb, b[i]);
    }
    int minc = INF;
    rep(i,M){
        cin >> x[i] >> y[i] >> c[i];
        minc = min(minc, a[x[i]-1] + b[y[i]-1] - c[i]);
    }
    cout << min(mina + minb, minc) << endl;
}

