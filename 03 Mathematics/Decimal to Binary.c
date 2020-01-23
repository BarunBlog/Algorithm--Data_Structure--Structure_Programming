/*#include<stdio.h>
  int main()
  {
    long long int d[100],decimal,i=0,j;
  scanf("%lld",&decimal);
    while(decimal>0){
  d[i]=decimal%2;
  i++;
  decimal=decimal/2;
    }
    for(j=i-1;j>=0;j--)
  printf("%lld",d[j]);
    return 0;
  }
*/
#include<stdio.h>
int decimal_binary(long long int I)
{
    if(I==0)
        return 0;
    else
        return (I%2+10*decimal_binary(I/2));
}
int main()
{
    long long int I,a,B,P;
    while(scanf("%lld",&I)==1)
    {
        if(I==0)
            break;
        B=decimal_binary(I);
        P=0,a=B;
         while (a != 0) {
            if (a % 10 == 1)
                P++;
            a /= 10;
        }
        printf("The parity of %lld is %lld (mod 2).\n",B,P);
    }
    return 0;
}

