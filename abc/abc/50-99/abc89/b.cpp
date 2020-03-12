#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    set<char> st;
    rep(i,n){
        char c;
        cin >> c;
        st.insert(c);
    }
    if(st.size()==3){
        cout << "Three" << endl;
    }else{
        cout << "Four" << endl;
    }
}
