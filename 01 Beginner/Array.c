/* Displaying a text in several times */
#include <stdio.h>
main()
{
    int i,n;
    char text[50];
    printf("Enter the text:");
    scanf("%[^\n]",text);

    printf("How many times display?");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
        printf("%s \n",text);

    return 0;
}
