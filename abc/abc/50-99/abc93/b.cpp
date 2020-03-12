#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int a,b,k;
    cin >> a >> b >> k;
    set<int> st;
    rep(i,k){
        if(a+i > b)
            break;
        st.insert(a + i);
    }
    rep(i,k){
        if(b-i<a)
            break;
        st.insert(b - i);
    }
    for(auto e:st){
        cout << e << endl;
    }
}
