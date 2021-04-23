#include<bits/stdc++.h>
#define MAX_N 100000
using namespace std;

unsigned long long int memo[MAX_N];

unsigned long long int fiboBottomUp(unsigned long long int n)
{
    if(n==0){
        return n;
    }
    /// Calculation started from base case and use the returned values to calculate larger values.
    unsigned long long int x = 0;
    unsigned long long int y = 1;
    for(int i=2; i<n; i++){
        unsigned long long int temp = x + y;
        x = y;
        y = temp;
    }
    return x+y;
}

int main()
{
    memset(memo, -1, sizeof(memo));
    int T;

    cin>>T;
    while(T--){
        unsigned long long int n;
        cin>>n;
        unsigned long long int nthFibo = fiboBottomUp(n);
        cout<<nthFibo<<endl;
    }

    return 0;
}


