#include<stdio.h>
int main()
{
    int arr[100],i,j,n,v,loc,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d%d",&v,&loc);
        arr[loc-1]=v;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
