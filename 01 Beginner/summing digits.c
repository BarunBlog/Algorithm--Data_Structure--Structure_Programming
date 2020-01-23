#include<stdio.h>
int main()
{
    long long int n,i,a,T,count,sum;
    while(scanf("%lld",&n)==1)
    {
        count=0,sum=0;
        while(n!=0)
        {
            a = n%10;
            sum+=a;

            n=n/10;



        }
        printf("%lld\n",sum);

    }
    return 0;
}
