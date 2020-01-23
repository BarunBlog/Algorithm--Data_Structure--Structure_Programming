#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int coin[15],value,n;
int dp[15][100];

int min_coin(int i,int amount)
{
    if(i>=n)
    {
        if(amount==value)
            return 1;
        else
            return 0;
    }
    if(dp[i][amount]!=-1)
        return dp[i][amount];
    int ret1=0,ret2=0;
    if(amount+coin[i]<=value)
        ret1=min_coin(i,amount+coin[i]); //try to take coin i
    ret2=min_coin(i+1,amount); //dont take coin i
    return dp[i][amount]=ret1+ret2;
}

int main()
{
    while(cin>>value>>n)
    {
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++)
            cin>>coin[i];
        cout<<"Total number of coin is:"<<min_coin(0,0)<<endl;
    }
    return 0;
}
