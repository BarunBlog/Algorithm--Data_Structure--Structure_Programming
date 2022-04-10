
#include<bits/stdc++.h>
using namespace std;

int second_max_number(int n, int arr[], int max1, int max2)
{
    if(n<0){
        return max2;
    }
    else{
        if(arr[n] > max1){
            max2 = max1;
            max1 = arr[n];
        }
        else if(arr[n] > max2){
            max2 = arr[n];
        }
        return second_max_number(n-1, arr, max1, max2);
    }
}

int main()
{
    int n,i;

    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int S_max = second_max_number(n, arr, 0, 0);

    cout<<S_max<<endl;



    return 0;
}
