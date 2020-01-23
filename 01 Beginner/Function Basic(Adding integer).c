#include<stdio.h>
int add(int a,int b)
{
    int s;
    s=a+b;
    return s;
    ///return a+b;
}
int main()
{
    int x,y,Z;
    scanf("%d%d",&x,&y);
    Z=add(x,y);
    ///printf("%d\n",add(4,6));
    printf("%d",Z);
}
