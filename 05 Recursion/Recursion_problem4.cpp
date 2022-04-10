/**
Write a recursive solution to evaluate the previous polynomial for any given x and n. Like, when x=2 and n=5, we have 1 + x + x2 + ................. + xn-1 = 31
Input:
2 5
Output:
31
*/

#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int polynomial(int x, int n)
{

    if(n==1)
        return n;

    else{
        return pow(x, n-1) + polynomial(x, n-1);

    }

}

int main()
{
    int x, n, result;
    cin>>x>>n;

    result = polynomial(x,n);

    cout<<result<<endl;
    return 0;
}

