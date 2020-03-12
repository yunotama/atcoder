#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,a;
    cin >> x;
    a = x / 100;
    if (a * 100 <= x && x <= a * 105)
    {
         cout << '1' << endl;
    }else{
         cout << '0' << endl;
     }
}