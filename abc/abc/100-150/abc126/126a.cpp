#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    string s;
    cin >> n >> k;
    cin >> s;
    vector<vector<char>> abc={{'A','a'},{'B','b'},{'C','c'}};
    for (int i = 0; i < 3;i++){
        if(s[k-1]==abc[i][0])
            s[k - 1] = abc[i][1];
    }
    cout << s << endl;
}