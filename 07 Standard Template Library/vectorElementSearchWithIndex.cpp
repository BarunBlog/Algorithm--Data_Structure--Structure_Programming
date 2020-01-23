#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>myVec = {1,5,7,2,4,9,14,3,11,10};
    int number=14;

    vector<int>::iterator it;
    it = find(myVec.begin(),myVec.end(),number);

    if(it!=myVec.end()){
        cout<<"Element "<<number<<" Found at position "<<it-myVec.begin()+1<<endl;
    }
    else{
        cout<<"Element not found."<<endl;
    }

    return 0;
}
