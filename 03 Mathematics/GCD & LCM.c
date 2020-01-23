#include <stdio.h>
int main()
{
    int a,b,t,x,gcd,lcm,c,d;

    while(scanf("%d%d",&a,&b)!=EOF){
    c=a,d=b;
    if(a==0)
       gcd=a;
    else if(b==0)
        gcd=b;
    else{
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    lcm=(c*d)/gcd;
    printf("GCD is %d\nLCM is %d\n",gcd,lcm);
    }
    return 0;
}

