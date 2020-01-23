#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,i,sum;
    while(cin>>n){
        sum = 0;
        for(i=0;i<n;i++){
            cin>>a;
            if(i==0){
                sum = a;
            }
            if(i>0){
                sum ^= a;
            }
            printf("%d\n",sum);
        }
        printf("Ans is %d\n",sum);
    }
    return 0;
}

