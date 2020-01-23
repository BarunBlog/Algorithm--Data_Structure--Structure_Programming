#include<stdio.h>
int fibo(int n)
{
    if(n<2)
        return n;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n,y;
    while(scanf("%d",&n)==1)
    {
        y=fibo(n);
        printf("%d\n",y);
    }
    return 0;
}
