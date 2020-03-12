#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h[i];
    int tmp = h[0];
    vector<int> list;
    list.push_back(0);
    rep(i, n - 1)
    {
        if(h[i+1]>=tmp){
            tmp = h[i + 1];
            list.push_back(i+1);
        }

    }
    rep(i,list.size()){
     h[list[i]]--;
    }
    rep(i,n-1){
        tmp = h[i];
        if (tmp > h[i + 1])
        {
            cout << "No" << endl;
        return 0;
        }
    }
    cout << "Yes" << endl;
}
