#include<bits/stdc++.h>
using namespace std;
int value;
int min_coin(int n, int coin[])
{
    int T[value+1]; ///For storing minimum number of coins..
    T[0]=0; ///if value is 0.
    for(int i=1;i<=value;i++)
        T[i]=INT_MAX;
    for(int i=1;i<=value;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(coin[j]<=i){
                int sub_res = T[i-coin[j]];
                if(sub_res != INT_MAX && sub_res + 1 < T[i])
                    T[i] = sub_res + 1;
            }
        }
    }
    return T[value];
}
int main()
{
    int n,coin[100],i;
    while(cin>>value>>n)
    {
        for(i=0;i<n;i++)
            scanf("%d",&coin[i]);
        cout<<"Minimum coins required is: "<<min_coin(n,coin)<<endl;
    }
    return 0;
}

