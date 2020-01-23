#include<stdio.h>
int main()
{
    int d[20],decimal,i=0,j;
    scanf("%d",&decimal);
    while(decimal>0){
        d[i]=decimal%2;
        i++;
        decimal=decimal/2;
    }
    for(j=i-1;j>=0;j--)
        printf("%d",d[j]);
    return 0;
}
