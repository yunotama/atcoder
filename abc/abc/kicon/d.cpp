#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define fi first
#define se second
using namespace std;
vector<pair<int, int>> ab;
int cnt = 0;
void bsort(vector<pair<int,int>> a,int n){
    rep(i,n){
        for (int j = n-1; j>0;j--){
            int k = j;
            k--;
            int x1, y1,x2,y2;
            if(k%2==0){
                x1 = a[k].fi;
                y1 = a[j].se;
                x2 = a[j].fi;
                y2 = a[k].se;
            }else{
                x1 = a[k].se;
                y1 = a[j].fi;
                x2 = a[j].se;
                y2 = a[k].fi;
            }
            if(x1>y1||x2<=y2){
                swap(a[k], a[j]);
                cnt++;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i,n){
        cin >> a[i];
    }
    rep(i,n) {
        cin >> b[i];
    }
    //偶数の時１個目、奇数の時２個目
    rep(i,n){
        if(i%2){
            ab.emplace_back(a[i], b[i]);
        }else{
            ab.emplace_back(b[i], a[i]);
        }
    }
    vector<int> dp(n,100);
    sort(ab.begin(), ab.end());
    rep(i,n){
        if(i%2==0){
            swap(ab[i].fi, ab[i].se);
        }else{

        }
    }

    /* bsort(ab, n);
    bool flag = true;
    int tmp= ab[0].fi;
    for (int i = 1; i < n;i++)
    {
        int next;
        if(i%2==0){
            next = ab[i].fi;
        }else{
            next = ab[i].se;
        }
        if(tmp > next){
            flag = false;
            break;
        }else{
            tmp = next;
        }
    }
    if(flag){
        cout << cnt << endl;
    }else{
        cout << -1 << endl;
    }
    */
}
