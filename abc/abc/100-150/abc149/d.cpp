#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int r, s, p;
    cin >> r >> s >> p;
    string t;
    cin >> t;
    ll ans = 0;

    for (int i = 0; i < k;i++)
    {
        char tmp = t[i];
        int cnt = 1;
        for (int j = 0;k * j + i < n;j++){
            int x = k * j + i;
            if(tmp == t[x]){
                cnt++;
            }else{
                if (tmp == 'r')
                {
                    ans += cnt / 2 * p;
                }
                else if (tmp == 's')
                {
                   ans+=cnt/2*r;
                }
                else if (tmp == 'p')
                {

                    ans+=cnt/2*s;
                }
                tmp = t[x];
                cnt = 2;
            }
        }
        if (tmp == 'r')
        {
            ans += cnt / 2 * p;
        }
        else if (tmp == 's')
        {
            ans += cnt / 2 * r;
        }
        else if (tmp == 'p')
        {

            ans += cnt / 2 * s;
        }
    }
    cout << ans << endl;
}
