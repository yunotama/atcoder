#include <bits/stdc++.h>
using namespace std;
int main(){
    int mod;
    mod = 1000000107;
    string L;
    cin >> L;
    int len = L.size();
    vector<int> list(len+1);
    list[0] = 1;
    for (int i = 0; i < len;i++){
        list[i+1] = list[i] * 3 % mod;
    }
    long long ans = 0;
    int cnt = 0;
    vector<int> index;
    for (int i = len-1; i >=0 ;i--){
        if(L[i]-'1'==0){
            cnt++;
            index.push_back(len-i-1);
        }
    }
    int k[len];
    k[0] = 1;
    for (int i = 0; i < cnt;i++){
        k[i + 1] = 2 * k[i] % mod;
    }
        for (int i = 0; i < index.size(); i++)
        {
            if (i == 0)
                ans = (ans + k[cnt-1] * (list[index[i]] + 2)) % mod;
            else
                ans = (ans + k[cnt-1] * list[index[i]]) % mod;
            cnt--;
        }
    cout << ans << endl;

}