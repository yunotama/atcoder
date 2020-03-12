#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int mid = sqrt(n);
    for (int i = 0; i < mid;i++){
        if(n%(mid-i)==0){
            n = (mid - i) + n / (mid - i) - 2;
            break;
        }        
    }
    cout << n << endl;
}