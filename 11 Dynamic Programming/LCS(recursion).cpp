/// Complexity M * N
#include<bits/stdc++.h>
using namespace std;

int memo[100][100];

int lcs(int i, int j, string &str1, string &str2)
{
    if(i==str1.size() || j==str2.size()){
        return 0;
    }
    if(memo[i][j] != -1){
        return memo[i][j];
    }

    int ans = 0;
    if(str1[i]==str2[j]){
        ans = 1 + lcs(i+1, j+1, str1, str2);
    }
    else{
        int value1 = lcs(i+1, j, str1, str2);
        int value2 = lcs(i, j+1, str1, str2);

        ans = max(value1, value2);
    }
    memo[i][j] = ans;
    return memo[i][j];
}

int main()
{
    int T;
    cin>>T;

    while(T--){
        string str1, str2;
        cin>>str1>>str2;
        memset(memo, -1, sizeof(memo));
        int lcs_value = lcs(0, 0, str1, str2);
        cout<<lcs_value<<endl;
    }

    return 0;
}

