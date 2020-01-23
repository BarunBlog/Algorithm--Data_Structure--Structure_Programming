#include <stdio.h>
int main()
{
    int i,n,sum=0,a;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        sum=sum+a;

    }
    printf("%d\n",sum);

    return 0;
}

