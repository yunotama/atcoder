#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
int main(){

    int n;
    cin >> n;
    vector<int> l(n);
    rep(i, n) cin >> l[i];
    sort(l.begin(), l.end(),greater<int>());
    int cnt = 0;
    for (int i = 0; i < n-2;i++){
        for (int j = i+1; j < n-1; j ++){
            int len = l[i] - l[j];
            if (len < 0)
                break;
            for (int k = j + 1; k < n ; k++){
                if(l[k]>len)
                    cnt++;

            }
        }
    }
    cout << cnt << endl;
    }