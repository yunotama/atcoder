#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1{'A', 'C', 'T', 'G'};
    char b;
    cin >> b;
    for (int i = 0; i < 4;i++){
        if(b==str1[i]){
            cout << str1[(i+2)%4] << endl;
            return 0;
        }
    }
}

