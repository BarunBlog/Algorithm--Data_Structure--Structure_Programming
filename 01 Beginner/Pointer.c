/*#include<stdio.h>
int main()
{
    int a=4,b=3,*p,*q;
    p=&a;
    q=&b;
    //printf("%d\n",*p);
    *p=5;
    *p++;
    *q=7;
    printf("%d  %d  %d  %d\n",*p,a,*q,b);
    ///*p=*q;///Assign value of q to p.
    /*p=q;///Assign address of q to p.
    printf("%d  %d  %d  %d\n",*p,a,*q,b);
    a=12;b=15;
    printf("%d  %d %d  %d\n",*p,a,*q,b);
    return 0;
}
/**#include<stdio.h>
int main()
{
    int u=3,v,*pu,*pv;
    pu=&u;
    v=*pu;
    pv=&v;
    printf("\nu=%d  &u=%d  pu=%d  *pu=%d",u,&u,pu,*pu);
    printf("\n\nv=%d  &v=%X  pv=%X  *pv=%d",v,&v,pv,*pv);
}*/
/*#include<stdio.h>
int main()
{
    int i,*pi=&i;
    char c,*pc=&c;
    float f,*pf=&f;
    double d,*pd=&d;
    printf("%d %d %d %d\n",pi,pc,pf,pd);
    pi++;pc++;pf++;pd++;
    printf("%d %d %d %d\n",pi,pc,pf,pd);
}*/

