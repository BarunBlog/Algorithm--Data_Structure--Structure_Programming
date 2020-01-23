#include<stdio.h>
int main()
{
    int n,i,sum=0,x;
    float avg;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        scanf("%d",&x);
        sum=sum+x;
        i++;
    }
    printf("%d\n",sum);
    avg=(float)sum/n;
    printf("%f\n",avg);


}
