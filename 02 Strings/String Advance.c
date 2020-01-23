#include<stdio.h>
void string_Concateration(char str1[],char str2[]);
void string_Compare(char str1[],char str2[])
{
    int i,j,ck,len1,len2,len;
    i=0,ck=1;
    len1=find_length(str1);
    len2=find_length(str2);
    while(str1[i]!='\0' || str2[i]!='\0'){
        if(str1[i]!=str2[i]){
            ck=0;
            break;
        }
        i++;
    }
    if(ck==1){
        string_Concateration(str1,str2);
        printf("%s ",str1);
    }
    else
    {
        len=len1+len2;
        printf("%d\n",len);
        return;
    }
}
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
    while(scanf("%s%s",ch1,ch2)==2)
        string_Compare(ch1,ch2);
        return 0;
}

