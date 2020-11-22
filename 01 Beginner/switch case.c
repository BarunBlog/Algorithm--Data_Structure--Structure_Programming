#include<stdio.h>
int main()
{
     char ch;

     scanf("%c",&ch);
     switch(ch)
     {
        case 'A':
            printf("Did not match\n");
            break;
        case 'B':
            printf("Brown\n");
            break;
        case 'M':
            printf("Match\n");
            break;
        default:
            printf("Nothing\n");

     }


  /*  int n=3;
    switch(n+1)
    {
    case 4:
        n;
        printf("%d\n",n);
        //break;
    case 5:
        n--;
        printf("Two\n");
        break;
    }*/
}
