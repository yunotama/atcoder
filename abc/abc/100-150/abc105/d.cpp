#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    string ans;
    if(n==0)
    {
        ans = '0';
    }
    while(n){
        if(n%2 != 0){
            n--;
            ans = ('1' + ans);
        }
        else
            ans = ('0' + ans);
        n /= -2;
    }
    cout << ans << endl;
}

