/*#include<stdio.h>
int main()
{
    char string[10]={'a','b','c','d','o','f','g'};
    printf("%s ",string);
}
/**#include <stdio.h>
int main()
{
char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', ' ', 'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y'};
printf("%s\n", country);
return 0;
}*/
/**#include <stdio.h>
int main()
{
char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h',
'\0', 'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y'};
printf("%s\n", country);
return 0;
}*/
/*#include<stdio.h>
int main()
{
    char ch[12]={"Bangladesh"};
    printf("%s\n",ch);
}*/
#include<stdio.h>
int main()
{
    char s[100],s1[100];
    int i,j,ln;
    scanf("%s%s",s,s1);
    for(ln=0;s[ln]!='\0';ln++){
        s[ln]=' ';
        ln++;
    }
    for(i=0;s1[i]!='\0';i++)
        s[ln+i]=s1[i];
        s[ln+i]=s1[i];
        printf("%s",s);
}

