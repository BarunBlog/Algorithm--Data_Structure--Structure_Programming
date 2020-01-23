///https://www.geeksforgeeks.org/find-divisors-natural-number-set-1/

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,i,j,sq;

    while(cin>>n){

        sq = sqrt(n);
        int arr[2*sq];

        for(i=1,j=0;i<=sq;i++){
            if(n%i==0){
                if(n/i==i)
                    arr[j++] = i;
                else{
                    arr[j++] = i;
                    arr[j++] = n/i;
                }
            }
        }
        for(i=0;i<j;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
