#include<stdio.h>
int main()
{
    int n,i,sum;
    scanf("%d",&n);
    int ar[n];
    sum=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
    printf("%d\n",sum);
}
