#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    if(1<=A&&A<=9&&1<=B&&B<=9)
        cout << A * B << endl;
    else{
        cout << -1 << endl;
    }
}