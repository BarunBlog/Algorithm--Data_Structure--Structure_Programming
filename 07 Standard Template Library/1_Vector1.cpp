#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> first; /// empty vector of ints
    vector<int> second(4,100); ///4 int's with value 100
    vector<int> third(second.begin(),second.end());///iterating through second
    vector<int> fourth(third); /// a copy of third

    vector<int>::iterator it;

    int arr[]={16,2,77,29};
    vector<int> fifth(arr, arr+sizeof(arr)/sizeof(int) );

    vector<int> sixth;
    sixth = fifth;

    vector<int> v1[100]; /// creates an array of 100 vectors. i.e. a 2d vec
    vector<int> v2(100); /// creates 1 vector of size 100

    for(it=sixth.begin();it!=sixth.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
