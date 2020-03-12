#include <bits/stdc++.h>
using namespace std;

bool ATGC(int A,string B){
    if(B[A]=='A'||B[A]=='G'||B[A]=='C'||B[A]=='T'){
        return true;
    }
    return false;
    }

    int main()
    {
        string S;
        cin >> S;
        int len,ans=0;
        len = S.size();
        for (int i = 1; i <= len; i++)
        {
            for (int j = 0; j < len-i+1; j++)
            {
                int l = 0;
                for (int k = j; k < j + i ; k++)
                {
                    if(ATGC(k,S)){
                        l++;
                    }else{
                        break;
                    }

                }
                ans = max(ans, l);
            }
        }
        cout << ans << endl;
}