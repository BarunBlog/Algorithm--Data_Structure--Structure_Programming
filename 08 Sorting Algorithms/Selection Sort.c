#include<stdio.h>
int main()
{
    int n,a[1000],i,j,k,temp,min,loc;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            loc=i;
            min=a[i];
            for(j=i+1;j<n;j++)
            {
                if(a[j]<min)
                {
                    min=a[j];
                    loc=j;
                }
            }
            temp=a[i];
            a[i]=a[loc];
            a[loc]=temp;
        }
        for(k=0;k<n;k++)
            printf("%d ",a[k]);
        printf("\n");
    }
    return 0;
}

