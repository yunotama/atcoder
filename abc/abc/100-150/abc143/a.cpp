#include<bits/stdc++.h>
#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    cout << max(0, a - 2 * b) << endl;
}
