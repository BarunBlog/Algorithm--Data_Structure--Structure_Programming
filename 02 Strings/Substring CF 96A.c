#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    char *p,*q;
    while(scanf("%s",str)==1)
    {
        p=strstr(str,"1111111");
        q=strstr(str,"0000000");
        if(p)
            printf("YES\n");
        else if(q)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

