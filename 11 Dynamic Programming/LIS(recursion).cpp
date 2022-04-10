/// Longest Increasing Subsequence Using Top Down DP

#include<bits/stdc++.h>
#define MAX_N 100
using namespace std;

int memo[MAX_N];


int func(int i, vector<int> &A)
{
    if(memo[i] != -1){
        return memo[i];
    }

    int ans = 0;

    for(int j=i+1; j<A.size(); j++){
        if(A[j]>A[i]){
            ans = max(ans, func(j, A));
        }
    }

    memo[i] = ans + 1;
    return memo[i];

}

int findLIS(vector<int>A)
{
    int i;
    int ans = 0;
    for(i=0; i<A.size(); i++){
        ans = max(ans, func(i, A));
    }
    return ans;
}

int main()
{
    int T;

    cin>>T;
    while(T--){
        memset(memo, -1, sizeof(memo));

        int n, i, a;
        vector<int>MyVec;
        MyVec.clear();
        cin>>n;

        for(i=0;i<n;i++){
            cin>>a;
            MyVec.push_back(a);
        }
        int lis = findLIS(MyVec);
        cout<<lis<<endl;
    }

    return 0;
}



