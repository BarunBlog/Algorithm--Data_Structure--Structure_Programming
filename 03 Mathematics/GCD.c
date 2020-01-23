#include<stdio.h>
int main()
{
    int a,b,i,x;
    while(scanf("%d%d",&a,&b)==2)
    {
       if(a<b)
            x=a;
       if(b<a)
          x=b;
       for(i=x;i>=1;i--){
           if((a%x==0) && (b%x==0)){
              printf("%d\n",x);
              break;
           }
            x--;
       }
    }
}
/*
#include <stdio.h>
int main()
{
    int a, b, x, gcd;
    scanf("%d%d",&a,&b);
    if(a<b)
       x=a;
    else
       x=b;
    for(;x >= 1; x--){
        if(a%x==0&&b%x==0){
            gcd=x;
            break;
        }
    }
    printf("GCD is %d\n",gcd);
return 0;
}
*/
