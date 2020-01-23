/**strchr(str,ch);
strrchr(str,ch);
strstr(str1,str2);*/
/**#include<stdio.h>
int main()
{
    char str[100]="My name is Barun Bhattacharjee";
    int addres,base;
    base=str;
    addres=(int)strstr(str,"is");///(int)strrchr(str,'B');
    if(addres==0)
        printf("Not Found\n");
    else
        printf("%d\n",addres-base+1);
}*/
///finding the number of sub-string in a length of n in a string...
#include<stdio.h>
int main()
{
    char str[100],l=0;
    int n,i,s;
    gets(str);
    n=strlen(str);
    printf("%d\n",n);
    for(i=0;str[i]<=n;i++)
    {
        if(str[i]==" ")
            l++;
    }
    printf("%d",l);

}

