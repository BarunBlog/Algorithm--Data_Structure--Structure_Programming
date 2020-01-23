#include <stdio.h>
/**int test_function(int x)
{
    int y = x;
    x = 2 * y;
    return (x * y);
}
int main()
{
    int x = 10, y = 20, z = 30;
    z = test_function(x);
    printf("%d %d %d\n", x, y, z);
return 0;///Desired output:20 10 200.
}        ///Real Output   :10 20 200.
*/
/*int x=10,y=20;
int test_function(int x)
{
    y = x;
    x = 2 * y;
    return (x * y);
}
int main()
{
    int z=30;
    z = test_function(x);
    printf("%d %d %d\n", x, y, z);
return 0;
}*/
int res,c;
int Add(int a,int b)
{
    int res=a+b;
    return res;
}
int abs(int a)
{
     int res;
     res=a<0 ? -a:a;
     return res;
}
int main()
{
    int x,y,z,k;
    scanf("%d%d",&x,&y);
    z=Add(x,y);
    k=abs(x);
    printf("%d %d %d\n",z,k,res);
    return 0;
}




