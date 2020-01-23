#include<stdio.h>
#include<string.h>
int find_length(char string[])
{
    int len=0,i;
    for(i=0;string[i]!='\0';i++)
        len++;
    return len;
}
int main()
{
    char ch[100];
    int l;
    gets(ch);
    l=find_length(ch);
    printf("%d\n",l);
}
