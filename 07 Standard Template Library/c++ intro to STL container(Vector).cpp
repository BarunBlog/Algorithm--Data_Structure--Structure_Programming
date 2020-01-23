#include<bits/stdc++.h>
using namespace std; /// Everything inside STL defined on namespace std..
int main()
{
    vector<int>V; ///dynamic array that has no fixed size
    V.push_back(2);
    V.push_back(8);
    V.push_back(4);
    V.push_back(1);
    /**for(vector<int>::iterator it=V.begin();it!=V.end();it++)
        cout<<*it<<" ";
    cout<<endl;*/
    vector<int>::iterator it1=V.begin();
    vector<int>::iterator it2=V.end();
    vector<int>::iterator it;
    for(it=it1;it!=it2;it++)///iterator behaves like a pointer..
        cout<<*it<<" ";
    cout<<endl;
    ///cout<<*vector.end()///Ouch!!! because it points the one spot after the last element of vector
    ///sort(V.begin(),V.end());
    sort(it1, it2);
    for(it=it1;it!=it2;it++)///iterator behaves like a pointer..
        cout<<*it<<" ";
    cout<<endl;
}

