#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,a,b;
    gets(str);
    scanf("%d%d",&a,&b);
    for(i=a-1;i<=a+b-2;i++)
        printf("%c",str[i]);
    printf("\n");
    return 0;
}
