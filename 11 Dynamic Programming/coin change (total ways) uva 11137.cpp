#include<bits/stdc++.h>
using namespace std;
long long int nways[10000];
int main()
{
    long long int coin[22],i,j,k,value;
    for(i=1;i<=21;i++)
        coin[i]=i*i*i;
    nways[0]=1;
    for(i=1;i<=21;i++)
    {
        for(j=coin[i],k=0;j<10000;j++,k++)
            nways[j]+=nways[k];
    }
    while(cin>>value)
        cout<<nways[value]<<endl;
    return 0;
}

