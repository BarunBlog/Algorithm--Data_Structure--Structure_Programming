/*#include<stdio.h>
int arr(int a[])
{
    int i,max;
    max=a[0];
    for(i=1;i<5;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    return max;
}
int main()
{
    int a[5],max,i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=arr(a);
    printf("%d\n",max);
    return 0;
}*/
void function(int a[])
{
    int i,sum=0,avg;
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];

    }
    printf("%d\n",sum);
    avg=sum/5;
    printf("%d\n",avg);
}
int main()
{
    int a[5],n,i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    function(a);
}
