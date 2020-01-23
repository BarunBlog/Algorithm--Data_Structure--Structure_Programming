#include<stdio.h>
void merge(int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j]=arr[m+1+j];
    i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }
    while(i<n1)
        arr[k++] = L[i++];
    while(j<n2)
        arr[k++] = R[j++];
}
void mergeSort(int arr[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
int main()
{
    int arr[1000],n,end,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    end=n-1;
    mergeSort(arr,0,end);
    for(i=0;i<end+1;i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
