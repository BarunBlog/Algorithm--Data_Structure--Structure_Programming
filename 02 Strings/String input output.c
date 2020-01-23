#include<stdio.h>
int main()
{
    char ch[100];
    ///1/scanf("%s",ch);
    ///2/scanf("%[^\n]",ch);/**take an input without newline*/
    ///3/gets(ch);
    ///advance input...☺☻♥☻☺...output.
/**4*/scanf("%[a-z A-Z 0-9 ]",ch);/// 2 & 4 same,
    printf("%s\n",ch);
    return 0;
}
