#include<stdio.h>
int main()
{
    int i,j;
    char input,alpha='A';
    scanf("%c",&input);
    for(i=1;i<=(input-'A'+1);i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",alpha);
        }
        alpha++;
        printf("\n");
    }
}

