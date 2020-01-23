///Finding maximum value of an array and location.
#include<stdio.h>
int main()
{
    int a[100],i,n,max,loc;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        max=a[0];
        for(i=1;i<n;i++){
            if(a[i]>max){
                max=a[i];
                loc=i+1;
            }
        }
        printf("The maximum number is %d found at location %d\n",max,loc);
    }
    return 0;
}

