#include <bits/stdc++.h>
using namespace std;

int ATGC(int A, string B)
{
    if (B[A] == 'A' || B[A] == 'G' || B[A] == 'C' || B[A] == 'T')
    {
        return 1;
    }
    return 0;
}

int main()
{
    string S;
    cin >> S;
    int len, ans = 0;
    len = S.size();
    vector<int> list(len,0);
    list[0] = ATGC(0, S);
    for (int i = 1; i < len;i++){
        if(ATGC(i,S))list[i] = list[i-1] + 1;
        else{
            list[i] = 0;
        }   
    }
    for (int i = 0; i < len;i++){
        ans = max(ans, list[i]);
    }

        cout << ans << endl;
}