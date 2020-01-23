#include<stdio.h>
int main()
{
    int *p,x,y,*q;
    p=&x;
    x=5;
    y=*p;
    ///y=*(&x);
    ///printf("%d",y);
    q=&(*(&x));
    *p=6;
    printf("%d",*q);
}
