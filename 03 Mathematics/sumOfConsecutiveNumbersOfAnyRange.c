#include<stdio.h>

int main()
{
    long long int firstNumber, lastNumber;
    long long int n, sum;

    scanf("%lld%lld",&firstNumber,&lastNumber);

    n = lastNumber-firstNumber+1;
    sum = (n*(firstNumber+lastNumber))/2;

    printf("Sum is: %lld\n",sum);
    return 0;
}

