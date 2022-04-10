/**
Write a recursive solution to print the polynomial series for any input n: 1 + x + x2 + ................. + xn-1
Input:
5
Output:
1 + x + x^2 + x^3 + x^4
*/

#include<bits/stdc++.h>
using namespace std;

void polynomial_series(int n)
{
    if(n==0)
        return;
    polynomial_series(n-1);

    if(n==1)
        cout<<n;
    else if(n==2)
        cout<<" + x";
    else
        cout<<" + x^"<<n-1;

}

int main()
{
    int n;

    cin>>n;

    polynomial_series(n);

    return 0;
}
