#include<stdio.h>
int main()
{
    int arr[100],n,start,mid,end,key,i;
    while(scanf("%d",&n)==1)
    {
        start=0,end=0;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
            end++;
        }
        scanf("%d",&key);
        mid=(int)(start+end)/2;
        for(i=0;i<n;i++){
            if(arr[mid]==key){
                printf("%d found at location %d\n",key,mid+1);
                break;
            }
            if(arr[mid]>key){
                end=mid-1;
                mid=(start+end)/2;
            }
            if(arr[mid]<key){
                start=mid+1;
                mid=(start+end)/2;
            }
            if(start>end){
                printf("Not found\n");
                break;
            }
        }
    }
    return 0;
}
