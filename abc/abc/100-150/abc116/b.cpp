#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int f(int a){
    int ret;
    if(a%2==0){
        ret = a / 2;
    }else{
        ret = 3 * a + 1;
    }
    return ret;
}
int main()
{
    int s;
    cin >> s;
    vector<int> v(1000001);
    int cnt = 1;
    while (!v[s]){
        v[s]++;
        cnt++;
        s = f(s);
    }
    cout << cnt << endl;
}
