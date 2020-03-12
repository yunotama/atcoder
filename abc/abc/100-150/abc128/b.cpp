#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;

    string s;
    int p;
    vector<pair<string,pair<int,int>>> list(N);
    for (int i = 0; i < N; i++){
        cin >> s;
        cin >> p;
        s = s;  
        list[i]=make_pair(s,make_pair(-p,i+1));
    }
    sort(list.begin(), list.end());
    for (int i = 0; i < N;i++)
        cout << list[i].second.second << endl;
}
    /*
    s = "";
    for (int i = 0; i < N; i++){
        if(s!=list[i].first){
        s = list[i].first;
        vector<pair<int, int>> ans(0);
        for (int j = 0; j < N; j++)
        {
            if(list[j].first==s){
                ans.push_back(list[j].second);
            }
        }
        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());
        for (int j = 0; j < ans.size();j++){
            cout << ans[j].second << endl;
        }
     }
   }
*/
