#include<bits/stdc++.h>
using namespace std;

int max_number(int n, int arr[], int Max)
{
    if(n<0){
        return Max;
    }
    else{
        if(arr[n] > Max){
            Max = arr[n];
        }
        return max_number(n-1, arr, Max);
    }
}

int main()
{
    int n, i;

    cin>>n;
    int arr[n+1];

    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    int Max = max_number(n, arr, 0);
    cout<<Max<<endl;

    return 0;
}
