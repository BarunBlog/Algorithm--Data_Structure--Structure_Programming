///when we have base and height
#include<stdio.h>
#include<math.h>

int main()
{
    float base, height, area;

    scanf("%f%f",&base,&height);
    area = (height*base)/2.0;

    printf("Area is: %f\n",area);

    return 0;
}
