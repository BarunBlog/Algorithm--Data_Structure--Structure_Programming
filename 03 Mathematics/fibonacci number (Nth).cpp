/// Binet's Formula for the nth Fibonacci number : http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibFormula.html
/// Finding Nth Fibonacci Number without loop
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int n,count,result;
    double phi=(sqrt(5)+1)/2.0;
    double a;
    cin>>n;
    if(n>=0)
        a = (pow(phi,n) / sqrt(5));
    else
        a = (pow((-phi),(-n)) / sqrt(5));
    result = rint(a);
    cout<<result<<endl;

    return 0;
}
