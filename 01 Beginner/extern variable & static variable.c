#include<stdio.h>

int A;
int n=2;

int add(int a,int b)
{
    extern int A;
    A=a+b;
    return a+b;
}

int count()
{
    static int n=0;
    n++;
    return n;
}

int main()
{
    printf("Extern Variable Part: \n");

    printf("%d\n",A);
    printf("%d\n",add(5,6));

    printf("Static Variable Part: \n");
    //int a=count();
    printf("%d\n",count());
    printf("%d\n",count());
    printf("%d\n",count());
    //printf("%d\n",a);
    printf("%d\n",n);
}




