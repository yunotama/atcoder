#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M, C,l,ans=0;
    cin >> N >> M >> C;
    int A[N][M], B[M];
    for (int i = 0; i < M;i++){
        cin >> B[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        l = C;
        for (int j = 0; j < M; j++)
        {
            l += A[i][j] * B[j];
        }
        if (l > 0)
            ans++;
        }
    cout << ans << endl;

}