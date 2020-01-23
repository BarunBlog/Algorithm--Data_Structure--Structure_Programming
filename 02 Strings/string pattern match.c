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
    char str[100],search[100];
    int ln1,ln2,i,j,ck;
    gets(str);
    gets(search);
    ln1=string_length(str);
    ln2=string_length(search);
    for(i=0;i<=ln1-ln2;i++)
    {
        for(j=i;j<i+ln2;j++)
        {
            ck=1;
            if(str[j]!=search[j-i])
            {
                ck=0;
                break;
            }
        }
        if(ck==1)
        break;
    }
    if(ck==1)
    printf("%d\n",i+1);
    else
    printf("SEARCH UNSUCCESSFUL!\n");
    return 0;
}
