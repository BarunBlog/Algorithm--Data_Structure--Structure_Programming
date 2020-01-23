#include<stdio.h>
int main()
{
    int arr[100],i,j,n,loc,value;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&loc);
    for(i=0;i<n;i++)
    {
        if(i==loc-1)
            continue;
        printf("%d ",arr[i]);
    }
}
