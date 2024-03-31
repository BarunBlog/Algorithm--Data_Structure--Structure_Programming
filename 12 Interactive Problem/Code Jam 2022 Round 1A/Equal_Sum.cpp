#include<bits/stdc++.h>
using namespace std;


void sum_of_subset(int weight, int total, int sum, int arr[], int n)
{


}


int main()
{

    int T;
    cin>>T;


    while(T--){
        int N, i, j;
        cin>>N;

        int arr1[N*2+1]={0};

        long long int total=0;

        for(i=1;i<N;i++){
            arr1[i-1] = i;
            total += i;
            cout<<i<<" ";
        }
        arr1[i-1] = i;
        total += i;
        cout<<i<<endl;

        for(j=i;j<2*N;j++){
            cin>>arr1[j];
            total += arr1[j];
        }


        sum_of_subset(0, total, total/2, arr1, N);


    }

    return 0;
}
