#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    string s;
    cin >> s;
    int mod = 1000000007;
    int list[5][10];
    list[0][1] = 1;
    rep(i,5){
        list[i][0] = 0;
        if (i != 0)
            list[i][1] = list[i-1][1] * 10 % 13;
        rep(j,8){
            list[i][j + 2] = (list[i][j+1] + 10) % 13;
        }
    }
}