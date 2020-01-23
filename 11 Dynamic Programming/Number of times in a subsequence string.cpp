///Find number of times a string occurs as a subsequence in given string
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,ln1,ln2;
    int T[1100][1100];
    string str1,str2;
    cin>>str1;
    cin>>str2;
    ln1=str1.size();
    ln2=str2.size();
    for ( i = 0; i <= ln2; ++i)
        T[0][i] = 0;

    for (i = 0; i <= ln1; ++i)
        T[i][0] = 1;

    for ( i = 1; i <= ln1; i++)
    {
        for (int j = 1; j <= ln2; j++)
        {
            if (str1[i - 1] == str2[j - 1])
                T[i][j] = T[i - 1][j - 1] + T[i - 1][j];
            else
                T[i][j] = T[i - 1][j];
        }
    }
    cout<<T[ln1][ln2]<<"Number of Subsequences"<<endl;
    return 0;
}

