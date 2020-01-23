#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T[100][100],i,j,total,N,coin[100];
    cin>>total>>N;
    for(i=0;i<N;i++)
        cin>>coin[i];
    for(i=0;i<=total;i++)
    {
        if(i%coin[0]==0)
            T[0][i]=i/coin[0];
        else
            T[0][i]=9999;
    }
    for(i=1;i<N;i++)
    {
        for(j=0;j<=total;j++)
        {
            if(j>=coin[i])
                T[i][j]=min(T[i-1][j],T[i][j-coin[i]]+1);
            else
                T[i][j]=T[i-1][j];
        }
    }
    cout<<"Required Matrix is:"<<endl;
    for(i=0;i<N;i++)
    {
        for(j=0;j<=total;j++)
        {
            if(T[i][j]==9999)
                cout<<"0 ";
            else
                cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
    int x=i-1,y=j-1;
    int up=i-2;
    while(T[x][y]!=0)
    {
        if(T[x][y]==T[up][y])
        {
            x--;
            up--;
        }
        else
        {
            cout<<coin[x]<<" ";
            y-=coin[x];
        }
    }
    return 0;
}


