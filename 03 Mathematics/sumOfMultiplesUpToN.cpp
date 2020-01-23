///https://www.geeksforgeeks.org/sum-multiples-number-n/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,N;
    while(cin>>a>>N){
        int mults = N/a;
        int summationOfM = (mults*(mults+1)/2);
        int sum = a*summationOfM;
        cout<<sum<<endl;
    }

    return 0;
}
