#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int N,i,ln1,sum1=0,sum2=0;
    int arr1[30]={0},arr2[30]={0};
    string str1,str2,str3;

    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>str1;
        str2=str2+str1;
    }
    cin>>str3;

    for(i=0;i<26;i++)
    {
        arr1[i]=count(str2.begin(),str2.end(),'A'+i);
    }
    ln1=str3.size();
    for(i=0;i<26;i++)
    {
        arr2[i]=count(str3.begin(),str3.end(),'A'+i);
        sum1+=arr2[i];
    }

    for(i=0;i<26;i++)
    {
        if(arr1[i]<=arr2[i])
            sum1 -= arr1[i];
        else if(arr1[i]>arr2[i])
        {
            sum1 -= arr2[i];
            sum2 += (arr1[i]-arr2[i]);
        }
    }
    if(sum1>=sum2)
        cout<<sum2<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}

