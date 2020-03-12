#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int w[n],all, ans = 0, tmp = 0;
    for (int i = 0; i < n;i++){
        cin >> w[i];
        ans += w[i];
    }
    all = ans;
    for (int i = 0; i < n-1;i++){
        tmp += w[i];
        ans = min(abs(all - 2 * tmp), ans);
    }
    cout << ans << endl;
}