#include <bits/stdc++.h>
using namespace std;
int main (){
    long N, m;
    cin >> N >> m;
    long a[m];
    long ans = 1;
    for (int i = 0; i < m;i++){
        cin >> a[i];
    }
    long list[N+3];
    list[0] = 1;
    list[1] = 1;
    for (int i = 0; i <= N;i++){
        list[i + 2] = (list[i + 1] + list[i]) % 1000000007;
    }
    long now = 0;
    for (int i = 0; i < m;i++){
        int step;
        step = a[i] - now - 1;
        if (step < 0){
            cout << 0 << endl;
            return 0;
        }
        ans = ans * list[step] % 1000000007;
        now = 1+a[i];
    }
    ans = ans * list[N - now]% 1000000007;
    cout << ans << endl;
}