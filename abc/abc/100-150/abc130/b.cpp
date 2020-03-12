#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n >> x;
    int l[n];
    for (int i = 0; i < n;i++){
        cin >> l[i];
    }
    int ans = 0;
    int D = 0;
    ans++;
    for (int i = 0; i <n;i++){
        D += l[i];
        if(x < D){
            break;
        }
        ans++;
    }
    cout << ans << endl;
}