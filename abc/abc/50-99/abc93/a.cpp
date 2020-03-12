#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a<b){
        swap(a, b);
    }
    if(b<c){
        swap(b, c);
    }
    if (a < b)
    {
        swap(a, b);
    }
    int ans = 0;
    b = a - b;
    c = a - c;
    if((b%2 == 0)^(c%2==0)){
        ans += b / 2;
        ans += c / 2;
        ans += 2;
    }else{
        ans += b / 2;
        ans += c / 2;
        if(b%2!=0)
            ans++;
    }
    cout << ans << endl;
}
