#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int ans;
    if(a!=b)
        ans = max(2*a-1, 2*b-1);
    else
        ans = 2 * a;
    cout << ans << endl;
}