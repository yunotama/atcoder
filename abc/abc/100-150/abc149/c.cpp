#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
bool prime(int x){
    if(x==2)
        return true;
    else if(x%2==0)
        return false;

    double r = sqrt(x);
    for (int i = 3; i <= r; i += 2)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int x;
    cin >> x;
    while(!prime(x)){
        x++;
    }
    cout << x << endl;
}
