/// Area of a triangle when we have length of 3 sides
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,s;
    float area;

    scanf("%f%f%f",&a,&b,&c);

    s = (a+b+c)/2.0; //half of the triangles perimeter
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area is : %f\n",area);
    return 0;
}
