#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    string s,t;
    cin >> s >> t;
    vector<int> p1(10000),p2(10000);
    int n = s.size();
    rep(i,n){
        if(p1[s[i]]==0){
            p1[s[i]] = t[i];
        }else{
            if(p1[s[i]]!=t[i]){
                cout << "No" << endl;
                return 0;
            }
        }
        if(p2[t[i]]==0){
            p2[t[i]] = s[i];    
        }else{
            if(p2[t[i]]!=s[i]){
                cout << "No" << endl;
                return 0;
            }

        }
    }
    cout << "Yes" << endl;
}
