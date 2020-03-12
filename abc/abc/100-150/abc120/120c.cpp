#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r=0, b=0, ans, n;
    string S;
    cin >> S;
    n = S.size();
    for (int i = 0; i < n ;i++){
        if(S[i] == '0')
            r++;
        else
            b++;
    }
    ans = 2*min(b, r);
    cout << ans << endl;
}