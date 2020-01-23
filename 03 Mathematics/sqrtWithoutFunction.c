#include<stdio.h>

double sqrt(double number)
{
    double error = 0.000001;
    double s = number;

    while((s-number/s)>error){
        s = (s + number/s)/2;
    }
    return s;
}

int main()
{
    double n, sq;

    scanf("%lf",&n);
    sq = sqrt(n);

    printf("%lf\n",sq);
    return 0;
}

