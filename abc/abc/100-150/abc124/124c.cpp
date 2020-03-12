#include <bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin >> S;
    int IO = 0, OI = 0;
    for (int i = 0; i < S.size();i++){
        if (i%2==0){
            if(S[i]=='0')
                IO++;
            else if(S[i]=='1')
                OI++;
        }
        else {
            if(S[i]=='0')
                OI++;
            else if (S[i]=='1')
                IO++;
        }
    }
    cout << min(OI, IO) << endl;
}