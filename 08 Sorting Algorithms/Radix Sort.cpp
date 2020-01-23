#include<iostream>
#define Range 15
using namespace std;
void countSort(int arr[], int n, int exp)
{
    int output[n];
    int i, count[Range+1] = {0};
    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;

    for (i = 1; i < Range; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

int main()
{
    int N,arr[100],max=0,i;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    for(int exp = 1; max/exp > 0; exp *= 10)
        countSort(arr, N, exp);

    for (i = 0; i < N; i++)
        cout << arr[i] << " ";
    return 0;
}

