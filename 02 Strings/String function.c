///String function strlen,strcpy,strcat,strcmp.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[100];
    int i,ln,ck;
    gets(s);
    //scanf("%s%s",s,s1);
    //strcpy(s,s1);
    ///strcat(s," ");
    ///strcat(s,s1);
    ///ln=strlen(s);
    ///ck=strcmp(s,s1);
    strrev(s);
    printf("%s",s);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
    int i,ck;
    char N[100],N1[100];
    while(scanf("%s%s",N,N1)!=EOF){

    ck=strcmp(N,N1);
    if(strlen(N)>strlen(N1))
        printf("N big\n");
    else if(strlen(N)<strlen(N1))
        printf("N1 big\n");
    else if(ck==0)
        printf("Same\n");
    else if(ck==1)
        printf("N big\n");
    else if(ck==-1)
        printf("N1 Big\n");

    }

}
*/
