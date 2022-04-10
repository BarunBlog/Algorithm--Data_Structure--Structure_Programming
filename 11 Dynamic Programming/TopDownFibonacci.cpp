/// Time Complexity: O(n)
#include<bits/stdc++.h>
#define MAX_N 100000
using namespace std;

unsigned long long int memo[MAX_N];

unsigned long long int fiboTopDown(unsigned long long int n)
{
    if(n==0 || n==1){
        return n;
    }
    if(memo[n]!= -1){
        return memo[n];
    }
    else{
        memo[n] = fiboTopDown(n-1)+fiboTopDown(n-2);
        /// The process of saving the result of subproblems is called Memoization.
        return memo[n];
    }
}

int main()
{
    memset(memo, -1, sizeof(memo));
    int T;

    cin>>T;
    while(T--){
        unsigned long long int n;
        cin>>n;
        unsigned long long int nthFibo = fiboTopDown(n);
        cout<<nthFibo<<endl;
    }

    return 0;
}



