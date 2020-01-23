#include<stdio.h>
/**double Add(double a,double b);

int main()
{
    double a,b,c;
    scanf("%lf%lf",&a,&b);
    c=Add(a,b);
    printf("%lf\n",c);
    return 0;
}
double Add(double x,double y)
{
    double sum=x+y;
    return sum;
}*/
/*int abs(int a,int b);
int Add(int a,int b);
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=abs(a,b);
    printf("%d\n",c);
    return 0;
}
int abs(int a,int b)
{
    int ad=Add(a,b);
    if(ad<0)
        return -ad;
    else
        return ad;
}
int Add(int a,int b)
{
    int sum=a+b;
    return sum;
}*/
int function2(int a,int b)
{
    printf("%d ",b+5);
    return b+40;
}
int main()
{
    int a=7,b=6;
    int c=function2(a,b);
    return 0;
}
