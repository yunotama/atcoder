#include <bits/stdc++.h>
using namespace std;
int main(){
    double w, h, x, y;
    double s;
    cin >> w >> h >> x >> y;
    s = (w * h) / 2;
    printf("%.9f ", s);
    if((w / 2 == x) && (h / 2 == y))
        cout << 1 << endl;
    else
        cout << 0 << endl;
}