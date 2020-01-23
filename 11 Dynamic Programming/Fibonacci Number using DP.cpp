#include<bits/stdc++.h>
int Dp[20];
int Fibo(int n)
{
    if(n==0)
        return n;
    if(n==1)
        return n;
    if(Dp[n]!=-1)
        return Dp[n];
    else
    {
        Dp[n] = Fibo(n-1)+Fibo(n-2);
        return Dp[n];
    }
}
int main()
{
    int N,a;
    while(scanf("%d",&N)==1){
        for(int i=0;i<N;i++)
            Dp[i]=-1;
        a=Fibo(N);
        printf("%d\n",a);
    }
    return 0;
}

