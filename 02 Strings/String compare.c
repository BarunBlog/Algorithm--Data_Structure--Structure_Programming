#include<stdio.h>
void string_Compare(char str1[],char str2[])
{
    int i,j,ck;
    i=0,ck=1;
    while(str1[i]!='\0' || str2[i]!='\0'){
        if(str1[i]!=str2[i]){
            ck=0;
            break;
        }
        i++;
    }
    if(ck==1)
        printf("Same\n");
    else
        printf("Not Same\n");

}
int main()
{
    char ch1[100],ch2[100];
    int r;
    scanf("%s%s",ch1,ch2);
    string_Compare(ch1,ch2);
    return 0;
}
