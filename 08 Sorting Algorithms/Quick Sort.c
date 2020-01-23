/// Quick Sort
#include<stdio.h>
void quick_sort(int arr[],int start,int end)
{
    int pivot;
    if(start>=end)
        return;
    pivot=partition(arr,start,end);
    quick_sort(arr,start,pivot-1);
    quick_sort(arr,pivot+1,end);
}
int partition(int arr[],int start,int end)
{
    int temp,j;
    int pivot=arr[end];
    int i=start-1;
    for(j=start;j<end;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
        temp=arr[end];
        arr[end]=arr[i+1];
        arr[i+1]=temp;
        return i+1;
}
int main()
{
    int end,i,start=0,arr[100],n;
    scanf("%d",&end);
        for(i=0;i<end;i++)
            scanf("%d",&arr[i]);
        quick_sort(arr,start,end-1);
        for(i=0;i<end;i++)
            printf("%d ",arr[i]);
        printf("\n");
        return 0;
}
