#include<iostream>
#define Range 20
using namespace std;
void countsort(int arr[],int n)
{
    int output[n+1],i;
    int count[Range+1]={0};
    for(i=0;arr[i];i++)
        ++count[arr[i]];
    for(i=1;i<=Range;i++)
        count[i]+=count[i-1];
    for(i=0;arr[i];i++)
    {
        output[count[arr[i]]-1]=arr[i];
        --count[arr[i]];
    }
    for(i=0;arr[i];i++)
        arr[i]=output[i];
}
int main()
{
    int n,arr[100],i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    countsort(arr,n);
    for(i=0;i<n;i++)
       cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

