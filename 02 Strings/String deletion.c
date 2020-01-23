#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int a,b,i,j;
    gets(str);
    scanf("%d%d",&a,&b);
    for(i=0;str[i]!='\0';i++)
    {
        if(i+1==a){
            while(i+1!=(a+b)){
            i++;
            }
        }
        printf("%c",str[i]);
    }
    return 0;
}
