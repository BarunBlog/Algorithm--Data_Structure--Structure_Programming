/**  a[] is the array, p is starting index, that is 0,
and r is the last index of array.  */
void quicksort(int a[],int p,int r)
{
  if(p<r)
  {
    int q;
    q=partition(a,p,r);
    quicksort(a,p,q);
    quicksort(a,q+1,r);
  }
}
int partition(int a[],int p,int r)
{
  int i,j,pivot,temp;
  pivot=a[p];
  i=p;
  j=r;
  while(1)
  {
       while((a[i]<pivot) && (a[i]!=pivot))
            i++;
       while((a[j]>pivot) && (a[j]!=pivot))
            j--;
       if(i<j)
       {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
       }
       else
        return j;
  }
}
int main()
{
    int end,i,start=0,arr[100],n;
    scanf("%d",&end);
        for(i=0;i<end;i++)
        {
            scanf("%d",&arr[i]);
        }
        quick_sort(arr,start,end-1);
        for(i=0;i<end;i++)
        {
            printf("%d\n",arr[i]);
        }
        return 0;

}
