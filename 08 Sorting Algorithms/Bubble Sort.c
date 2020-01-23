#include<stdio.h>
int main()
{
    int arr[100],i,j,k,n,temp;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(k=0;k<n;k++)
            printf("%d ",arr[k]);
        printf("\n");
    }
    return 0;
}

