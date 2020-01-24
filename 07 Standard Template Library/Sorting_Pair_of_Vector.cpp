#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,a,b;
    cin>>n;
    vector<pair<int,int>>myVec(n);
    for(i=0;i<n;i++){
        cin>>myVec[i].first>>myVec[i].second;
    }



    sort(myVec.begin(),myVec.end());

    cout<<endl;
    vector<pair<int,int>>::iterator it;
    for(it=myVec.begin();it!=myVec.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    return 0;
}

