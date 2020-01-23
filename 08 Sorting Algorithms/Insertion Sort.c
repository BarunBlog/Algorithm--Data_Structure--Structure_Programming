#include<stdio.h>
int main()
{
    int n,a[1000],i,j,k,t,x;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(j=0;j<n;j++)
        {
            x=j;
            while(x>0 && a[x-1]>a[x])
            {
                t=a[x-1];
                a[x-1]=a[x];
                a[x]=t;
                x--;
            }
            for(k=0;k<n;k++)
                printf("%d ",a[k]);
            printf("\n");
        }
    }
    return 0;
}

