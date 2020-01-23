
/* Finding the result of the student */
#include <stdio.h>
main()
{
    int r;
    printf("Enter the result of the student:");
    scanf("%d",&r);
    if(r>=80)
        printf("The student got A+ or 4.00 \n Outstanding");
    else if(r>=75 && r<=79)
        printf("The student got A or 3.75 \n Excellent");
    else if(r>=70 && r<=74)
        printf("The student got A- or 3.50 \n Very Good");
    else if(r>=65 && r<=69)
        printf("The student got B+ or 3.25 \n Good");
    else if(r>=60 && r<=64)
        printf("The student got B or 3.00 \n Above Average");
    else if(r>=55 && r<=59)
        printf("The student got B- or 2.75 \n Average");
    else if(r>=50 && r<=54)
        printf("The student got C+ or 2.50 \n Below Average");
    else if(r>=45 && r<=49)
        printf("The student got C or 2.25 \n Poor");
    else if(r>=40 && r<=44)
        printf("The student got D or 2.00 \n Pass");
    else
        printf("The student got F or 0.00 \n Fail");
}
