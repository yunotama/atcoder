#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x1,x2;

    cin >> n;
    x1 = n * 100 / 108;
    x2 = (n + 1) * 100 / 108;
    if((n+1)*100%108==0){
        if (n * 100 % 108 == 0){
            cout << x1 << endl;
        }
        else if (x1 < x2 - 1){
            cout << x1 + 1 << endl;
        }else{
            cout << ":(" << endl;
        }
    }
    else if (n * 100 % 108 == 0)
    {
        cout << x1 << endl;
    }else{
        if(x1 != x2){
            cout << x2 << endl;
        }else{
            cout << ":(" << endl;
        }
    }

}