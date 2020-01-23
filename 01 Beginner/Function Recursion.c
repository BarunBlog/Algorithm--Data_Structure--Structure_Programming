//assignment 3:GCD
/*#include<stdio.h>
int gcd(int n1,int n2)
{
    if(n2!=0)
        return gcd(n2,n1%n2);
    else
        return n1;
}
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    printf("%d\n",gcd(n1,n2));
    return 0;
}*/
/*#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else{
        printf("%d ",n);
        return n*fact(n-1);
    }
}
int main()
{
    printf("%d",fact(5));
    return 0;
}*/
#include<stdio.h>
int function(int x)
{
    if(x==0)
        return 0;
    else
        return x+function(x-1);
}
int main()
{
    int a;
    a=function(5);
    printf("%d",a);
    return 0;
}
/*#include<stdio.h>
int function(int x)
{
    int sum=0;
    if(x==0)
        return x;
    else{
        function(x-1);
        sum=sum+x;
        return sum;
    }
}
int main()
{
    int s;

    s=function(5);
    printf("%d ",s);
}
*/
