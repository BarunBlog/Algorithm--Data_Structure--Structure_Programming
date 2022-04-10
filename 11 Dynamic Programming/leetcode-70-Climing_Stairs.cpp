#include<bits/stdc++.h>

using namespace std;

int memo[50];

int climbStairs(int n)
{
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }

    if(memo[n] != 0){
        return memo[n];
    }
    else{
        memo[n] = climbStairs(n-1) + climbStairs(n-2);
        return memo[n];
    }
}


int main()
{
    int n;
    cin>>n;
    int result = climbStairs(n);

    cout<<result<<endl;

    return 0;
}
