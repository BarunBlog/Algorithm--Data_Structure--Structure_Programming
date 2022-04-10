/**
Write a recursive solution to compute lcm of two integers. You must not use the formula lcm(a,b) = (a x b) / gcd(a,b); find lcm from scratch...
Input:
23 488
Output:
11224
*/

#include<bits/stdc++.h>

using namespace std;

int lcm(int a, int b, int inc)
{
    if(a%b==0){
        return a;
    }
    else if(b%a==0){
        return b;
    }
    else if(b>a){
        return lcm(a, b+inc, inc);
    }
    else{
        return lcm(a+inc, b, inc);
    }

}

int main()
{
    int a, b;
    cin>>a>>b;

    int l = lcm(a,b, max(a,b));
    cout<<l<<endl;
    return 0;
}
