#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int T,N,K,i,j,k,ck,sum1,sum2,d,a,max,min,x,y;
    cin>>T;
    while(T--)
    {
        cin>>N>>K;
        int arr1[N+5]={0};
        int arr2[N+5]={0};
        sum1=0,sum2=0,ck=1;
        for(i=0,j=0,k=0;i<N;i++)
        {
            cin>>a;
            if(i%2==0){
                sum1+=a;
                arr1[j++]=a;
            }
            else{
                sum2+=a;
                arr2[k++]=a;
            }
        }
        if(sum2>sum1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        d=sum1-sum2;
        while(d>=0)
        {
            if(K==0)
            {
                ck=0;
                break;
            }
            max = *max_element(arr1,arr1+j);
            x = max_element(arr1,arr1+j)-arr1;
            min = *min_element(arr2,arr2+k);
            y = min_element(arr2,arr2+k)-arr2;
            arr1[x] = min;
            arr2[y] = max;
            sum1 -= max;
            sum1 += min;
            sum2 -= min;
            sum2 += max;
            d=sum1-sum2;
            K--;
        }
        if(ck==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}

