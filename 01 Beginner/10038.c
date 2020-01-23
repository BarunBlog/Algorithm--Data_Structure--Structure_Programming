#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,j,t,sub=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sub=n;
        scanf("%d",&n);
        sub=n-sub;
        printf("%d ",abs(sub));
    }
}
