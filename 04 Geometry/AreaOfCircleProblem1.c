/// Radius of the inner and outer circle is given.
/// Calculate the remaining area of outer circle.

#include<stdio.h>
#include<math.h>

int main()
{
    double pi = acos(-1);
    double rInner, rOuter;
    double areaOfInnerCircle, areaOfOuterCircle;
    double remainingAreaOfOuterCircle;

    scanf("%lf%lf",&rInner,&rOuter);

    if(rInner>=rOuter){
        printf("Invalid input! rInner must be smaller rOuter\n");
        return 0;
    }

    areaOfInnerCircle = pi*pow(rInner,2);
    areaOfOuterCircle = pi*pow(rOuter,2);

    remainingAreaOfOuterCircle = areaOfOuterCircle - areaOfInnerCircle;
    printf("Remaining area of outer circle is: %lf\n",remainingAreaOfOuterCircle);

    return 0;
}

