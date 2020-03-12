#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
int main()
{
    vector<int> v;
    rep(i, 9) v.push_back(i + 1);
    do{
        double tmp = 0;
        rep(i,3){
            double a = 0,b = 0;
            rep(j, 3){
                if(j == 0){
                    a = v[i * 3 + j];
                }else if(j == 1){
                    b += 10 * v[i * 3 + j];
                }else{
                    b += v[i * 3 + j];
                }
            }
            tmp += a/b;
        }
        if (tmp == 1)
        {
            rep(i, 9)
            {
                cout << v[i];
            }
            cout << endl;
            return 0;
        }
    } while (next_permutation(v.begin(), v.end()));
}
