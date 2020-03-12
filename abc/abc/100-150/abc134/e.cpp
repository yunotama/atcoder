#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int len = a.size();
    int ans = 0;
    rep(i,len)
    {
        if(a[i]<0)
            continue;
        ans++;
        int tmp = a[i];
        a[i] = -1;
        rep(i,len-1)
        {
            if(a[i+1]<0)
                continue;
            if(tmp < a[i+1]){
                tmp = a[i+1];
                a[i+1]=-1;
            }
        }        
    }
    cout << ans << endl;
}
/*
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> a(n);
    rep(i, n) cin >> a[i];
    int len = a.size();
    int ans = 0;
    while(a.size()){
        ans++;
        int tmp = a[0];
        a.erase(a.begin());
        rep(i,a.size())
        {
            if(tmp < a[i]){
                tmp = a[i];
                a.erase(a.begin() + i);
                i--;
            }
        }        
    }
 
    cout << ans << endl;
} 
*/