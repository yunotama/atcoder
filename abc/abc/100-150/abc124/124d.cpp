#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<vector<int>> list(n,vector<int>(2));
    vector<int> group(2);
    int x = 1;
    if(s.size()>=2){
    for (int i = 1; i <= n;i++){
        if(s[i-1]==s[i])
            x++;
        else{
            group[0] = (int)s[i - 1];
            group[1] = x;
            list.push_back(group);
            x = 1;
        }
        if(i==n){
            group[0] = (int)s[i - 1];
            group[1] = x;
            list.push_back(group);
        }
    }
    vector<int> list2(n);
    if (list[list.size()-1][0] == 0)
    {
        group[0];
        group[1];
        list.push_back(group);
    }
    if(list[0][0] == 0){
        reverse(list.begin(), list.end());
        group[0];
        group[1];
        list.push_back(group);
    }
    list2[0] = list[0][1]+list[1][1];
    for (int i = 1; i < (list.size()-1)/2;i++){
        list2[i] = list2[i-1] + list[2 * i][1] + list[2 * i + 1][1];
    }
    int ans = 0, tmp = 0, len2= list2.size();
    if(k>=len2){
        group = list.back();
        ans = list2[len2 - 1] + group[1];
    }else{
        ans = list2[k-1] + list[2*k][1];
        for (int i = 0; i + k < len2 && 2 * (i + k + 1) < list.size(); i++)
        {
            group = list[2 * (i + k + 1)];
            tmp = list2[i + k] - list2[i] + group[1];
            ans = max(ans, tmp);
    }
    }
    cout << ans << endl;
    }else {
        int ans = 1;
        cout << ans << endl;
    }
}