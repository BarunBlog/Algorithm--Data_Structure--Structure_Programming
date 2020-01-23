/// Finding factorial of n'th number using recursion.
#include<stdio.h>
int fact(int n)
{
    if(n<=1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int x,y;
    while(scanf("%d",&x)==1){
    y=fact(x);
    printf("%d\n",y);
    }
    return 0;
}
