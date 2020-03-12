#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
const int mod = 1000000007;
int rev[3100][3100];
int dp[3100][3100];
char s[3100];
char t[3100];
char ans[3100];
int main()
{
    scanf("%s%s", s, t);
    int n = strlen(s);
    int m = strlen(t);
    for (int i = 0; i < 3100;i++){
        for (int j = 0; j < 3100;j++){
            dp[i][j] = -mod;
        }
    }
    dp[0][0] = 0;
    for (int i = 0; i <= n;i++){
        for (int j = 0; j <= m;j++){
            if(i+1<=n){
                if(dp[i+1][j]<dp[i][j]){
                    dp[i + 1][j] = dp[i][j];
                    rev[i + 1][j] = 0;
                }
            }
            if (j + 1 <= m){
                if (dp[i][j+1] < dp[i][j])
                {
                    dp[i][j+1] = dp[i][j];
                    rev[i][j+1] = 1;
                }
            }
            if(i+1 <= n&& j+1 <= m && s[i]==t[j]){
                if(dp[i+1][j+1]<dp[i][j]+1){
                    dp[i + 1][j + 1] = dp[i][j] + 1;
                    rev[i + 1][j + 1] = 2;
                }
            }
        }
    }
    int ns = n;
    int nt = m;
    int at = dp[n][m] - 1;
    while(ns||nt){
        if(rev[ns][nt]==0)
            ns--;
        else if(rev[ns][nt]==1)
            nt--;
        else{
            ns--;
            nt--;
            ans[at] = s[ns];
            at--;
        }
    }
    printf("%s\n", ans);
}
