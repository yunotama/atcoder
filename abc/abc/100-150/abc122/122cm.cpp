#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<char> S(N);
    for (int i = 0; i < N;i++){
        cin >> S[i];
        }

    vector <int> l(Q), r(Q);
    vector<int> list(N);
    int k = 0;
    for (int i = 1; i < N;i++){
        if(S[i-1] == 'A'&& S[i]=='C'){
            k++;
        }
        list[i] = k;
    }
    for (int i = 0; i < Q;i++){
        cin >> l[i] >> r[i];
    }

        for (int i = 0; i < Q; i++)
        {
            cout << list[r[i]-1]-list[l[i]-1] << endl;
        }
    
}
/*int AC(int A, string B)
{
    if (B[A] == 'A' && B[A+1] == 'C')
    {
        return 1;
    }
    return 0;
}
int calc(int Start,int end, string A){
    int len = end - Start;
    int ans = 0;
    for (int j = 0; j < len; j++)
    {
        ans += AC(Start - 1 + j, A);
    }
    return ans;
}*/