#include<bits/stdc++.h>
#include<math.h>
#include<stdlib.h>
#include <algorithm>

using namespace std;
int main()
{
    int N,i,j,result1,result2;
    while(cin>>N){

        int arr[N+2]={0};
        for(i=0;i<N;i++){
            cin>>arr[i];
        }
        result1 = arr[0];
        for(i=1;i<N;i++)
        {
            result1 = __gcd(arr[i],result1);

        }
        result2 = arr[0];
        for(i=1;i<N;i++)
        {
            result2 = (arr[i]*result2) / __gcd(arr[i],result2);
        }
        cout<<"GCD is: "<<result1<<endl;
        cout<<"LCM is: "<<result2<<endl;
    }
}

