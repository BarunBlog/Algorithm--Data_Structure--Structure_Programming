#include<stdio.h>
struct Birthdate{
int x;
char name[16];
};
int main()
{
    int T,i,d,m,y;
    scanf("%d",&T);
    struct Birthdate p[T],min,max;
    for(i=0;i<T;i++)
    {
        scanf("%s%d%d%d",p[i].name,&d,&m,&y);
        p[i].x=d+m*100+y*10000;
    }
    max=p[0];
    min=p[0];
    for(i=0;i<T;i++)
    {
        if(p[i].x>max.x)
            max=p[i];
        if(p[i].x<min.x)
            min=p[i];
    }
    printf("%s\n%s\n",max.name,min.name);
    return 0;
}

