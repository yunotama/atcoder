#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> time(5);
    int ans = 0;
    for (int i = 0; i < 5;i++){
        cin >> time[i];
        ans += ((time[i] - 1) / 10 + 1) * 10;
        time[i] = time[i] % 10;
    }
    sort(time.begin(), time.end());
    for (int i = 0; i < 5;i++){
        if(time[i]!=0){
            ans += time[i] - 10;
            break;
        }

    }
    cout << ans << endl;

    }