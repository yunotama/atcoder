#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> s;
    int i = 0;
    if(n==0){
        s.push_back(0);
    }
    while(n){
        if(i%4==0){
            s.push_back(abs(n % 2));
            n -= abs(n) % 2;
        }else if(i%4==2){
            s.push_back(abs(n % 2));
            n += abs(n) % 2;
        }else{
            n /= 2;
        }
        i++;
    }
    reverse(s.begin(), s.end());
    rep(i, s.size()) cout << s[i];
    cout << endl;
}
