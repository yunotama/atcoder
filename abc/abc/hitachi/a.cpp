#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main(){
    string t;
    cin >> t;
    int len = t.size();
    if((len%2)==1){
        cout << "No" << endl;
        return 0;
    }
    for(int i= 0;i<len;i++){
        if((i % 2 == 0 && t[i] != 'h')){
            cout << "No" << endl;
            return 0;
        }else if((i%2==1 && t[i] != 'i')){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
