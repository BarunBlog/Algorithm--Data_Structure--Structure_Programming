///https://toph.co/p/around-the-square
#include<stdio.h>
#include<math.h>

int main()
{
    int a,r1,r2,r3,r4;
    double pi = acos(-1);
    double totalAreaOfCircleOnSquare,areaSquare;

    while(scanf("%d%d%d%d%d",&a,&r1,&r2,&r3,&r4)==5){

        areaSquare = a*a;
        totalAreaOfCircleOnSquare = ((pi*r1*r1)/4.0)+((pi*r2*r2)/4.0)+((pi*r3*r3)/4.0)+((pi*r4*r4)/4.0);

        printf("%.3lf\n",areaSquare-totalAreaOfCircleOnSquare);
    }
    return 0;
}
