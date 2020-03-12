#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    rep(i,n){
        cin >> a[i];
    }
    rep(i,n){
        int len = a[i].size();
        if(a[i][len-1]=='s'){
            a[i] += "es";
        }
        else if(a[i][len-1]=='o'){
            a[i] += "es";
        }
        else if(a[i][len-1]=='x'){
            a[i] += "es";
        }
        else if(a[i][len-1]=='h' && (a[i][len-2]=='s' || a[i][len-2] == 'c')){
            a[i] += "es";
        }
        else if(a[i][len-1]=='f'){
            a[i][len - 1] = 'v';
            a[i] += "es";
        }
        else if ((a[i][len - 1] == 'e' && a[i][len - 2] == 'f')){
            a[i][len - 2] = 'v';
            a[i][len - 1] = 'e';
            a[i] += 's';
        }
        else if(a[i][len-1]=='y' && (a[i][len-2] != 'a' && a[i][len-2] != 'i'&& a[i][len-2] != 'u'&& a[i][len-2] != 'e'&& a[i][len-2] != 'o')){
            a[i][len - 1] = 'i';
            a[i] += "es";
        }
        else{
            a[i] += "s";
        }
    }
    rep(i,n){
        cout << a[i] << endl;
    }
}
