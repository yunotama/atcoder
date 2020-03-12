#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    int left, right;
    cin >> s;
    left = s[0] * 10 + s[1]-528;
    right = s[2] * 10 + s[3]-528;
    if ((left > 12 || left == 0) && (right > 12 || right == 0))
        cout << "NA" << endl;
    else if ((left > 12 && 0 < right <= 12) || (left == 0 && right <= 12))
        cout << "YYMM" << endl;
    else if ((0 < left <= 12 && right > 12) || (left <= 12 && right == 0))
        cout << "MMYY" << endl;
    else
        cout << "AMBIGUOUS" << endl;
}