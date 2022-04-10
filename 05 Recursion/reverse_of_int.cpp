/**
Write a recursive solution to get the reverse of a given integer. Function must return an int
Input:
123405
Output:
504321
*/

#include<bits/stdc++.h>
using namespace std;

int reverse_int(int n, int a)
{
    if(n==0){
        return a;
    }
    else{
        int d = n % 10;
        return reverse_int(n/10, a*10+d);
    }
}

int main()
{
    int n;
    cin>>n;

    int rev = reverse_int(n, 0);

    cout<<rev<<endl;

    return 0;
}
