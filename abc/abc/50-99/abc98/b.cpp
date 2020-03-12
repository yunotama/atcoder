#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n - 1;i++){
        int cnt = 0;
        map<char, int> mp;
        for (int j = i + 1; j < n;j++){
            for (int k = 0; k <= i;k++){
                if(s[j] == s[k]){
                    mp[s[j]]++;
                }
            }
        }
        for (int j = i + 1; j < n;j++){
            if(mp[s[j]]){
                mp[s[j]] = 0;
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}
