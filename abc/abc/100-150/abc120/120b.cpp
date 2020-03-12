#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, k,x,l=0,ans;
    cin >> a >> b >> k;
    x = min(a, b);
    for (int i = 0; i < x;i++){
        if (a % (x-i) == 0 && b % (x-i)== 0){
            l++;
        }if(l==k){
            ans = x-i;
            break;
        }
    }
    cout << ans << endl;
}