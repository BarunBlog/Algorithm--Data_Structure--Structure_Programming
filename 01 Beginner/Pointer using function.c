/*#include<stdio.h>
void inr(int *a)
{
    (*a)++;
}
int main()
{
    int a=5;
    printf("%d\n",a);
    inr(&a);
    printf("%d",a);
    return 0;
}*/
/**#include<stdio.h>
void function(int *p,int *q)
{
    *p=2;
    *q=3;
}
int main()
{
    int x=7,y=8;
    printf("%d %d\n",x,y);
    function(&x,&y);
    printf("%d %d\n",x,y);
}*/
#include<stdio.h>
void area(int l,int w,int *area1,int *area2)
{
    *area1=l*w;
    *area2=(l*w)/2;
}
int main()
{
    int len=2,wid=3,area1,area2;
    area(len,wid,&area1,&area2);
    printf("Rectangle %d\n",area1);
    printf("triangle %d\n",area2);
}
/*#include<stdio.h>
void function(int a,int b,int *sum,int *sub,int *mult,int *div)
{
    *sum=a+b;
    *sub=a-b;
    *mult=a*b;
    *div=a/b;
}
int main()
{
    int a,b,sum,sub,mult,div;
    scanf("%d%d",&a,&b);
    function(a,b,&sum,&sub,&mult,&div);
    printf("%d %d %d %d\n",sum,sub,mult,div);
}
/*#include<stdio.h>
void funct1(int u,int v)
{
    printf("\n%d %d\n",u,v);
    return;
}
void funct2(int *pu,int *pv)
{
    *pu=0,*pv=0;
    printf("\n%d %d\n",*pu,*pv);
    return;
}
int main()
{
    int u=1,v=3;
    printf("\nBefore calling funct1: u=%d v=%d ",u,v);
    funct1(u,v);
    printf("\nAfter calling funct1: u=%d v=%d ",u,v);

    printf("\nBefore calling funct2: u=%d v=%d ",u,v);
    funct2(&u,&v);
    printf("\nAfter calling funct2: u=%d v=%d ",u,v);
}*/

