#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n;i++)
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0,ans=0;
    rep(i,n-1){
        if(s[i]==s[i+1]){
            ans++;
        }
    }
    cout << min(2*k+ans,n-1) << endl;
}