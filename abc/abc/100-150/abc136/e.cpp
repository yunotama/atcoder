#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int n = 100001;
    int dp[n][n]={0};
    rep(i,len) dp[0][i] = 1;
    rep(i,n-1){
        rep(j,len){
            if(s[j]=='R')

                dp[i + 1][j + 1] += dp[i][j];
            else if (j != 0)
                dp[i + 1][j - 1] += dp[i][j];
        }
    }
}