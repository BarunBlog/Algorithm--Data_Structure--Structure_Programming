#include<stdio.h>
#include<string.h>
int string_length(char str[])
{
    int i,ln;
    for(i=0;str[i]!='\0';i++);
    ln=i;
    return ln;
}
int main()
{
    char str[100],str2[100],str3[100];
    int ln1,ln2,i,j=0,a;
    gets(str);
    gets(str2);
    scanf("%d",&a);
    ln1=string_length(str);
    ln2=string_length(str2);
    for(i=0;i<ln1+ln2;i++)
    {
        if(i+1==a)
        {
            for(j=0;j<ln2;j++)
                str3[i+j]=str2[j];
        }
        str3[i+j]=str[i];
    }
    str3[i]='\0';
    printf("%s\n",str3);
}
