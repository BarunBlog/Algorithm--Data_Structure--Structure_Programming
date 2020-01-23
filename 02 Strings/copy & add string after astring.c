#include<stdio.h>
int main()
{
    /*char sa[100],sa1[100];
    int i=0,ln;

    /*for(i=0;sa[i]!='\0';i++)
        sa1[i]=sa[i];
        sa1[i]=sa[i];
    printf("%s\n",sa1);
        scanf("%s%s",sa,sa1);
    for(ln=0;sa[ln]!='\0';ln++);
    sa[ln]=' ';
    ln++;
    for(i=0;sa1[i]!='\0';i++)
        sa[ln+i]=sa1[i];
        sa[ln+i]=sa1[i];
        printf("%s\n",sa);


}*/
#include<stdio.h>
int main()
{
    char s[100],s1[100];
    int i,chk=1;
    scanf("%s%s",s,s1);
    while(s[i]!='\0' || s1[i]!='\0')
    {
        if(s[i]!=s1[i])
        chk=0;
        i++;
    }
    if(chk==1)
        printf("same\n");
    else
        printf("Not same");
}
