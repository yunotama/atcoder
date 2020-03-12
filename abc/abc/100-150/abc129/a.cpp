#include <bits/stdc++.h>
using namespace std;
int main() {
    int p, q, r;
    cin >> p >> q >> r;
    int ans=p+q;
    ans = min(ans, q + r);
    ans = min(ans, r + p);
    cout << ans << endl;
}
