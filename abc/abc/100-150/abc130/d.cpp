#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (n);i++)
using namespace std;
int main() {

    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    rep(i, n) cin >> a[i];
    vector<long long> list(n + 1);
    list[0] = 0;
    long long left = 0, right = 0;
    long long ans = 0;
    rep(i, n){
        right = i + 1;
        list[i + 1] = list[i] + a[i];
        if (list[right] >= k){
            ans += n - right + 1;
            rep(j,right-left){
                list[right] -= a[left+j];
                if (list[right]>=k)
                    ans += n - right + 1;
                else{
                    left = left + j + 1;
                    break;
                }
            }
        }
    }        
 /*   long long start;
    rep(i,n){
        start = i;
        rep(j,n-start){
            if(k<=(list[start + j + 1] - list[start])){
                ans += n - (start + j);
                break;
            }
        }
    }
*/
    cout << ans << endl;
}