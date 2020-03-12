#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, l;
    cin >> n >> l;
    int aji=0, taberu=500;
    for (int i = 0; i < n; i++)
    {
        aji += l + i;
        if(abs(taberu) > abs(l+i))
        taberu = l + i;
    }
    aji -= taberu;
    cout << aji << endl;
}