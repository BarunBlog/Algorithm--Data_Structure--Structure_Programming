///Weekly assignment.
#include<stdio.h>
int main()
{
    int n,i,T,count;
    int Arr[100];
    while(scanf("%d",&n)==1){
        T=n;
        count=0;
    while(T!=0){
        T=T/10;
        count++;
    }
    for(i=count-1;i>=0;i--){
        Arr[i]=n%10;
        n=n/10;
    }
    for(i=0;i<count;i++)
        printf("%d ",Arr[i]);
    }

    return 0;
}
