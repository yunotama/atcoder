#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int s[10][10];
    int k[10];
    int p[10];
    int a=1;
    int ans = 0;
    int count;
    for (int i = 0; i < m;i++){
        cin >> k[i];
        for (int j = 0; j < k[i];j++){
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < m;i++){
        cin >> p[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        a *= 2;
    }
    int list[n];
    for (int i = 0; i < a; i++){
        int light = 0;
        int x = i;
        for (int j = 0; j < n;j++){
            list[j] = x % 2;
            x /= 2;
        }
        for (int j = 0; j < m; j++)
        {
            count = 0;
            for (int l = 0; l < k[j]; l++)
            {
                if(list[s[j][l]-1]==1){
                    count++;
                }
            }
            if(p[j]==count%2){
                light++;
            }else{
                break;
            }
        }
        if (light == m)
            ans++;
    }
    cout << ans << endl;
}