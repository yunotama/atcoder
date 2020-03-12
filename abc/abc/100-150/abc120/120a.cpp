#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, ans;
    cin >> a >> b >> c;
    ans = b / a;
    cout << min(ans,c) << endl;
}