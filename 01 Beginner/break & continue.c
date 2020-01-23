#include<stdio.h>
int main()
{
    int a,i;
    for(i=1;i<=20;i++)
    {
        if(i%2!=0)
            continue;
        else if(i>=16)
            break;
        else
            printf("%d ",i);
    }
}
