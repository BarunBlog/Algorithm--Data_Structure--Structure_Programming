/// Count all possible sub sets with the given sum using backtracking

#include<bits/stdc++.h>
using namespace std;



int count_subset;

void sum_of_subset(int arr[], int tempSum, int start, int sum, int N)
{
    //cout<<"TempSum: "<<tempSum<<" start: "<<start<<endl;
    if(tempSum == sum){
        count_subset++;
        return;
    }
    else{
        for(int i=start; i<N; i++){
            if(tempSum+arr[i]<=sum)
                sum_of_subset(arr, tempSum + arr[i], i+1, sum, N);
        }
    }


}

int main()
{
    int T;
    cin>>T;

    while(T--){

        count_subset = 0;

        int N, i, sum;
        cin>>N>>sum;

        int arr[N+1];

        for(i=0; i<N; i++){
            cin>>arr[i];
        }

        sum_of_subset(arr, 0, 0, sum, N);

        cout<<count_subset<<endl;
    }

    return 0;
}

