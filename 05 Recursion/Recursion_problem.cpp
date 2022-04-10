/**
Write a recursive function to print an array in the following order. [0] [n-1] [1] [n-2] ......... ......... [(n-1)/2] [n/2]
Input:
5
1 5 7 8 9
Output:
1 9
5 8
7 7

*/

#include<bits\stdc++.h>

using namespace std;

void func(int i, int n, int arr[])
{
    if(i==n || n-i==1){
        cout<<arr[i]<<" "<<arr[n]<<endl;
    }
    else{
        cout<<arr[i++]<<" "<<arr[n--]<<endl;
        func(i, n, arr);
    }

}

int main()
{
    int n, i;

    cin>>n;
    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    func(0, n-1, arr);

    return 0;
}






