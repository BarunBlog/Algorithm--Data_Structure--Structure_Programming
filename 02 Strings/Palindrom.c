/*///assignment:3 decimal to binary
#include<stdio.h>
  int main()
  {
    int d[20],decimal,i=0,j;
  scanf("%d",&decimal);
    while(decimal>0){
  d[i]=decimal%2;
  i++;
  decimal=decimal/2;
    }
    for(j=i-1;j>=0;j--)
  printf("%d",d[j]);
    return 0;
  }*/
//Assignment:2 Palindrom
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str2[100];
    int i,l,n,j;
    while(scanf("%s",str)!=EOF){
        l=strlen(str);
        j=0;
        for(i=l-1;i>=0;i--){
            str2[j]=str[i];
            j++;
        }
        str2[j]='\0';
        if(strcmp(str,str2)==0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
