#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int n;
    string s;
    cin >> s;
    n = s.size();
    vector<int> ans(n);
    rep(ri,2){
        rep(i,n)
        {
            int cnt = 0;
            if(s[i]=='R')
                cnt++;
            else{
                ans[i] += cnt / 2;
                ans[i - 1] += (cnt + 1) / 2;
                cnt = 0;
            }
        }
        reverse(ans.begin(), ans.end());
        reverse(s.begin(), s.end());
        rep(i,n){
            if(s[i]=='L')
                s[i] = 'R';
            else
                s[i] = 'L';
        }
    }
    rep(i,n){
        printf("%d%c", ans[i], i == n - 1 ? '\n' : ' ');
    }

}