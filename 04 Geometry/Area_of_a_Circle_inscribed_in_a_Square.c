#include<stdio.h>
#include<math.h>

int main()
{
    double side, area;
    double pi = acos(-1);
    double radius;

    scanf("%lf",&side);
    radius = side/2.0;

    area = pi*radius*radius;

    printf("Area of an inscribed circle: %lf\n",area);

    return 0;
}

/**
Input : side = 8
Output : Area of an inscribed circle: 50.26...
*/
