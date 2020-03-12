#include <bits/stdc++.h>
using namespace std;
int main()
{
    int W, H, N, S;
    cin >> W >> H >> N;
    S = 0;
    int x[N], y[N], a[N];
    int gra[W][H];
    for (int i = 0; i < W;i++){
        for (int j = 0; j < H;j++){
            gra[i][j] = 1;
        }
    }
        for (int i = 0; i < N; i++)
        {
            cin >> x[i] >> y[i] >> a[i];
        }

    for (int i = 0; i < N;i++){
        if(a[i]==1){
            for (int j = 0; j < x[i];j++)
            {
                for (int k = 0; k < H;k++){
                    gra[j][k] = 0;
                }
            }
        }else if (a[i]==2){
            for (int j = x[i]; j < W; j++)
            {
                for (int k = 0; k < H; k++)
                {
                    gra[j][k] = 0;
                }
            }
        }else if (a[i]==3)
        {
            for (int j = 0; j < y[i]; j++)
            {
                for (int k = 0; k < W; k++)
                {
                    gra[k][j] = 0;
                }
            }
        }else
        {
            for (int j = y[i]; j < H; j++)
            {
                for (int k = 0; k < W; k++)
                {
                    gra[k][j] = 0;
                }
            }
        }
}
for (int i = 0; i < W; i++)
{
    for (int j = 0; j < H; j++)
    {
        S = S + gra[i][j];
    }
}
cout << S << endl;
}