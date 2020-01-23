#include<stdio.h>
int main()
{
    int i;
    char ch;
    for(i=0;i<=5;i++)
    {
        ch=getchar();
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            continue;
        }
        putchar(ch);

    }
}
