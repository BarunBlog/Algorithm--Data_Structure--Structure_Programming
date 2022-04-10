/// Longest Increasing Subsequence Using Bottom Up(Iterative) DP

#include<bits/stdc++.h>
#define MAX_N 100
using namespace std;

int memo[MAX_N];



int iterativeLIS(vector<int>A)
{
    int i,j;

    for(i=A.size()-1; i>=0; i--){
        int ans = 0;
        for(j=i+1; j<A.size(); j++){
            if(A[j] > A[i]){
                ans = max(ans, memo[j]);
            }
        }
        memo[i] = ans + 1;
    }

    int lis = 0;
    for(i=0; i<A.size(); i++){
        lis = max(lis, memo[i]);
    }
    return lis;
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
        int lis = iterativeLIS(MyVec);
        cout<<lis<<endl;
    }

    return 0;
}
