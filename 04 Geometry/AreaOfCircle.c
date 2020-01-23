#include<stdio.h>
#include<math.h>

int main()
{
    double pi = acos(-1);
    double r,area;

    scanf("%lf",&r);
    area = pi*r*r;

    printf("Area is: %lf\n",area);

    return 0;
}
