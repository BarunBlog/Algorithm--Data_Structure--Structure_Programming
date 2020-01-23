#include<bits/stdc++.h>
using namespace std;
bool T[100][100];
int main()
{
    int Total,N,i,j,arr[100];
    cin>>Total>>N;
    for(i=0;i<N;i++)
        cin>>arr[i];
    for(i=0;i<=N;i++)
    {
        T[i][0]=1;
        for(j=1;j<=Total;j++)
        {
            if(i==0)
            {
                if(arr[i]==j)
                    T[i][j]=1;
                else
                    T[i][j]=0;
            }
            else if(j<arr[i])
                T[i][j]=T[i-1][j];
            else
                T[i][j]=(T[i-1][j] || T[i-1][j-arr[i]]);
        }
    }
    for(i=0;i<=N;i++)
    {
        for(j=0;j<=Total;j++)
            cout<<T[i][j]<<" ";
        cout<<endl;
    }

}

