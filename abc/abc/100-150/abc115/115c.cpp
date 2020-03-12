#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, ans = 1e9,dif;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n;i++){
        cin >> h[i];
    }
    sort(h.begin(), h.end());
    for (int i = 0; i < n - k + 1;i++){
        dif = (h[i + k - i] - h[i]);
        if (ans > dif)
            ans = dif;
    }
    cout << ans << endl;
}