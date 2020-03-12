#include <bits/stdc++.h>
using namespace std;
int main (){
    int N, result = 0, maxp = 0;
    cin >> N;
    int p[N];
    for (int i = 0; i < N;i++){
        cin >> p[i];
        result += p[i];
        if(maxp < p[i])
            maxp = p[i];
    }
    cout << result - (maxp / 2) << endl;
}