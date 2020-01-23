#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,nc=0,sum=0;
    printf("Enter the string containing both digits and alphabet\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='0')&&(str[i]<='9'))
        {
            nc+=1;
            sum+=(str[i]-'0');
        }
    }
    printf("NO. of Digits in the string = %d\n", nc);
    printf("Sum of all digits = %d\n", sum);
}

