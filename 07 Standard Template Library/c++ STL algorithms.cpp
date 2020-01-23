#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>V;
    V.push_back(4);
    V.push_back(2);
    V.push_back(5);
    V.push_back(1);
    V.push_back(3);
    V.push_back(9);
    vector<int>::iterator it= min_element(V.begin(),V.end());
    cout<<*it<<endl;

    sort(V.begin(),it);///Sort 4 to 5(excluding it), not to 1!.
    for(it=V.begin();it!=V.end();++it)
        cout<<*it<<" ";
    cout<<endl;
    it=min_element(V.begin(),V.end());

    reverse(it,V.end());
    for(it=V.begin();it!=V.end();++it)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}

