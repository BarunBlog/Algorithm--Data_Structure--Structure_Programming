///You will be given an array of integers, write a recursive solution to print it in reverse order.

#include<bits/stdc++.h>
using namespace std;

int * reverse_array(int n, int i, int arr[], int reversed_arr[])
{
    if(n>0){
        reversed_arr[i++] = arr[n-1];
        reverse_array(n-1, i, arr, reversed_arr);
    }

    return reversed_arr;
}

int main()
{
    int n,i;
    int *p;

    cin>>n;
    int arr[n];
    int reversed_arr[n]={0};

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    p = reverse_array(n, 0, arr, reversed_arr);

    for(i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;



    return 0;
}
