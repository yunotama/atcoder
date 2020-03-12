#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{

    long long a, b;
    cin >> a >> b;
    b = __gcd(a, b);
    long long cnt = 1;
    long long tmp = 0;
    if (b != 1){
        a = 2;
    while(b>=a*a){
        if(b%a==0){
            if (tmp == 0){
                tmp++;
                cnt++;
            }
            b /= a;
        }else{
            tmp = 0;
            a++;
        } 
    }
    cnt += 1;
    }
    cout << cnt << endl;
}
/*ll gcd(ll x, ll y){
    if (x<y)
        swap(x, y);
    ll r=y;
    while(r=x%y){
        x = y;
        y = r;
    }
    return y;
}
int main()
{
    ll a,b;
    cin >> a >> b;
    ll g = gcd(a,b);
    ll ret = 1;
    for (int i = 2; i * i <= g;++i){
        if (g % i == 0){
            while(g%i==0){
                g /= i;
            }
            ret++;
        }
    }
    if(g!=1)
        ret++;
    cout << ret << endl;
}
*\
   
   
   
   
   
   
   
   /* long long a,b;
    cin >> a >> b;
    vector<long long> g;
    if (a<b)
        swap(a, b);
    rep(i,b){
        if (b % (i + 1) == 0 && a % (i+1) == 0)
            g.push_back(i);
    }
    int num = g.size();
    int cnt = 0;
    rep(i,num)
    {
        rep(j,j<num-i-1){
            int a, b;
            b = g[i+ j + 1];
            a = g[i];
            while(b%a){
                b = a;
                a = b % a;
            }
            if(a!=1)
                cnt++;
        }
    }
    cout << cnt << endl;
}
*/