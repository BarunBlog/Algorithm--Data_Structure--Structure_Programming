/* Finding distance between two points */
#include <stdio.h>
#include <math.h>
main()
{
    int x1,y1,x2,y2;
    float D;
    printf("Enter point(x1,y1):");
    scanf("%d %d", &x1, &y1);
    printf("\nEnter point(x2,y2):");
    scanf("%d %d", &x2, &y2);
    D=sqrt(pow((x1-x2),2) + pow((y1-y2),2));
    printf("\nDistance=%f",D);
    return 0;
}

