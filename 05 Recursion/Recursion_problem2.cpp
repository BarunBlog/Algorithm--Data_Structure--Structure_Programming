/**
Write a recursive program to remove all odd integers from an array. You must not use any extra array or print anything in the function. Just read input, call the recursive function, then print the array in main().
Input:
6
1 54 88 6 55 7
Output:
54 88 6
*/

#include<bits/stdc++.h>
using namespace std;

void odd_number(int i, int j, int *n, int *arr)
{
    if(arr[j] % 2 == 0)
        arr[i++] = arr[j];

    if(j==*n-1){
        *n = i;
        return;
    }

    odd_number(i, j+1, n, arr);


}

int main()
{
    int n,i;
    cin>>n;
    int *p;


    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    odd_number(0, 0, &n, arr);

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


