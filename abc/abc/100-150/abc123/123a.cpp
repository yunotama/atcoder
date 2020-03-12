#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x(6);
    for (int i = 0; i < 6;i++){
        cin >> x.at(i);
    }
    if(x[4]-x[0] > x[5]){
        cout << ":(" << endl;
        return 0;
    }
    cout << "Yay!" << endl;
}