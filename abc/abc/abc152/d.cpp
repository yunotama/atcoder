#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<pair<int, int>,int> mp;

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int r = 10;
        int a, b;
        a = num % r;
        while(num/r){
            num /= r;
        }
        b = num;
        mp[{b, a}]++;
    }

    int cnt = 0;
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= 9; j++){
            cnt += mp[{i, j}] * mp[{j, i}];
        }
    }
    cout << cnt << endl;
}
