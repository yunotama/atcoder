#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, r = 0;
    char color;
    string S;
    cin >> S;
    N = (int)(S.length());
    color = S[0];
    for (int i = 0; i < N; i++)
    {
        if(color != S[i]){
            color = S[i];
            r++;
        }
    }
    cout << r << endl;
}