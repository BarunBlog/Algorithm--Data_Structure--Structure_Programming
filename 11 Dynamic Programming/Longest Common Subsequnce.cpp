#include<bits/stdc++.h>
using namespace std;
int T[100][100];
int main()
{
    char str1[100],str2[100],str3[100];
    int i,j,ln1,ln2;
    cin>>str1>>str2;
    ln1=strlen(str1);
    ln2=strlen(str2);
    for(i=0;i<=ln2;i++)
    {
        T[i][0]=0;
        for(j=1;j<=ln1;j++)
        {
            if(i==0)
                T[0][j]=0;
            else if(str2[i-1]==str1[j-1])
                T[i][j]=T[i-1][j-1]+1;
            else if(str2[i-1]!=str1[j-1])
                T[i][j]=max(T[i][j-1],T[i-1][j]);
        }
    }
    cout<<"Required Table is:"<<endl;
    for(i=0;i<=ln2;i++)
    {
        for(j=0;j<=ln1;j++)
            cout<<T[i][j]<<" ";
        cout<<endl;
    }
    int x=ln2,y=ln1,k=0;
    while(T[x][y]!=0)
    {
        if(T[x][y]==T[x-1][y])
            x--;
        else if(T[x][y]==T[x][y-1])
            y--;
        else
        {
            str3[k++]=str2[x-1];
            x--;
            y--;
        }
    }
    str3[k]='\0';
    cout<<"Longest Common subsequence is: ";
    for(i=k-1;i>=0;i--)
        cout<<str3[i];
    cout<<endl<<"Length of Longest Common subsequence: "<<T[ln2][ln1]<<endl;
    return 0;
}


