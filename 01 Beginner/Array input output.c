///Array input Output.
#include<stdio.h>
int main()
{
    int a[100],i,j,n;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(j=0;j<n;j++)
            printf("%d ",a[j]);
        printf("\n");
    }
    return 0;
}

