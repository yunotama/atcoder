#include <bits/stdc++.h>
using namespace std;
int main()
{
    int W, H, N, S;
    cin >> W >> H >> N;
    S = 0;
    int x[N], y[N], a[N];
    int lx = 0, rx = W, by = 0, uy = H;
    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i] >> a[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (a[i] == 1)
        {
        if(lx < x[i])
                lx = x[i];
        }
        else if (a[i] == 2){
            if(rx>x[i])
                rx = x[i];
        }
        else if (a[i] == 3)
        {
            if(by<y[i])
                by = y[i];
        }
        else
        {
            if (uy > y[i])
                uy = y[i];
        
        }
    }
    if (uy>by&&rx>lx){
        S = (uy - by) * (rx - lx);
    }else{
        S = 0;
    }
    std::cout << S << endl;
}