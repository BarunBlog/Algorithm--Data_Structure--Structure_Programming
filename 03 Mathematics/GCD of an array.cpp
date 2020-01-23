#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,i,result;
    cin>>T;
    while(T--)
    {
        cin>>N;
        int arr[N+2]={0};
        for(i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        result = arr[0];
        for(i=1;i<N;i++)
        {
            result = __gcd(result,arr[i]);
        }
        if(result==1)
            cout<<"0"<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}

