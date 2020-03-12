#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long A, B;
    cin >> A >> B;
    long long Asum, Bsum;
    if(A%2==1){
        Asum = (A / 2 + 1) % 2;
    }else{
        Asum = ((A + 1)/ 2 + 1) % 2;
        Asum = Asum ^ (A + 1);
    }
    if (B % 2 == 1)
    {
        Bsum = (B / 2 + 1) % 2;
    }
    else
    {
        Bsum = ((B + 1) / 2 + 1) % 2;
        Bsum = Bsum ^ (B + 1);
    }
    cout << ((Asum ^ Bsum) ^ A) << endl;
}