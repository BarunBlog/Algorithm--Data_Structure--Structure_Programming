#include<stdio.h>
int main()
{

    int s[6],n,i,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    max=s[0];
    for(i=1;i<n;i++)
    {
        if(s[i]>max)
            max=s[i];
        else
            max=max;
    }
    printf("%d\n",max);
    return 0;
}

