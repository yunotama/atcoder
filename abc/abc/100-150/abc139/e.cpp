#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    rep(i, n) rep(j, n-1) {
        cin >> a[i][j];
        a[i][j]--;
    }
    rep(i,n-1){
        for(int e:a[i]){
         if(i!=a[e]){

         }   
        }

    }



}