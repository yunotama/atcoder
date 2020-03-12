#include <bits/stdc++.h>
using namespace std;
int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> yoko(h,vector<int>(w,0)),tate(h,vector<int>(w,0));
    vector<string> s(h);
    for (int i = 0;i < h; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < h;i++)
    {
        int start = 0;
        for (int j = 0; j < w;j++){
            if(s[i][j]=='.'){
                yoko[i][start]++;
                if (j == w - 1){
                    for (int k = start; k < w;k++)
                    {
                        yoko[i][k] = yoko[i][start];
                    }
                }
            }else{
                for (int k = start; k < j;k++){
                    yoko[i][k] = yoko[i][start];
                }
                start = j+1;
            }

        }     
    }
    for (int i = 0; i < w; i++)
    {
        int start = 0;
        for (int j = 0; j < h; j++)
        {
            if (s[j][i] == '.')
            {
                tate[start][i]++;
                if (j == h - 1)
                {
                    for (int k = start; k < h; k++)
                    {
                        tate[k][i] = tate[start][i];
                    }
                }
            }
            else
            {
                for (int k = start; k < j; k++)
                {
                    tate[k][i] = tate[start][i];
                }
                start = j + 1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < h;i++){
        for (int j = 0; j < w; j++){
            if(tate[i][j]!=0&&yoko[i][j]!=0){
                ans = max(ans, tate[i][j] + yoko[i][j] - 1);
            }
        }
    }
        cout << ans << endl;
}