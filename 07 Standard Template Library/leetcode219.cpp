#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    vector<int>nums{1,2,3,1,2,3};
    int k = 2;

    vector< pair<int, int> > myvec;


    for(int i=0; i<nums.size(); i++){
        myvec.push_back( make_pair(nums[i], i) );
    }

    sort(myvec.begin(), myvec.end());
    int ck = 0;

    for(int i=0; i<myvec.size()-1; i++){
        if(myvec[i].first == myvec[i+1].first && abs(myvec[i].second - myvec[i+1].second) <= k ){
            ck = 1;
            break;
        }
    }
    if(ck==1){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}

