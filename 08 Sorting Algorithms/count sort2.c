#include<stdio.h>
void counting_sort(int a[],int n,int max)
{
    int count [50]={0},i,j;
    for(i=0;i<n;++i){
        count[a[i]]=count[a[i]]+1;
    }


    printf("Sorted Elements Are: ");
    for(i=0;i<=max;++i){
        for(j=1;j<=count[i];++j){
            printf("%d ",i);
        }
    }
    printf("\n");

}
int main()
{
    int a[50],n,i,max=0;
    printf("Counting Sort: \n");
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("\nEnter the elements of array:\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            printf("\nSince %d is greater than max\n",a[i]);
            printf("Then the value of max will be, max = %d\n",a[i]);
            max=a[i];
        }
    }
    printf("\n");
    counting_sort(a,n,max);
    return 0;

}

