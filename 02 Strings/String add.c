#include<stdio.h>
void string_Concateration(char str1[],char str2[])
{
    int i,len1,len2;
    len1=find_length(str1);
    len2=find_length(str2);
    for(i=len1;i<len1+len2;i++)
        str1[i]=str2[i-len1];
     str1[i]='\0';
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
    char ch1[100],ch2[100];
    scanf("%s%s",ch1,ch2);
    string_Concateration(ch1,ch2);
    printf("%s\n",ch1);
    return 0;
}
