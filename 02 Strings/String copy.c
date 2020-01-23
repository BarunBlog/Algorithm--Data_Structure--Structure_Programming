#include<stdio.h>
void string_copy(char string1[],char string2[])
{
    int len,i;
    len=find_length(string1);
    for(i=0;i<len;i++)
        string2[i]=string1[i];
        string2[i]='\0';
}
int find_length(char string[])
{
    int len=0,i;
    for(i=0;string[i]!='\0';i++)
        len++;
    return len;
}
int main()
{
    char ch[100],ch1[100];
    scanf("%s",ch);
    string_copy(ch,ch1);
    printf("%s\n",ch1);
}

