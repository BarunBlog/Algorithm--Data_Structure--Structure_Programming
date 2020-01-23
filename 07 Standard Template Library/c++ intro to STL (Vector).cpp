///Sequence containers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vc;
    cout<<"Size of vector is:"<<vc.size()<<endl;
    vc.push_back(2);
    vc.push_back(4);
    vc.push_back(6);

    cout<<vc[2]<<endl;///8(no range check)
    cout<<vc.at(2); ///8 (throw range_error exception when the index is out of range)

    ///traversing container
    for(int i;i<vc.size();i++)
        cout<<vc[i]<<" ";
    cout<<endl;

    for(vector<int>::iterator it=vc.begin();it!=vc.end();it++)///faster and Universal
        cout<<*it<<" ";
    cout<<endl;
    /// Common member functions of all container
    cout<<"Size of vector is:"<<vc.size()<<endl;
    if(vc.empty())
        cout<<"Not Possible"<<endl;
    vector<int>vc2(vc);/// copy constructor, vc2: 2 4 6

    vc.clear();
    vc2.swap(vc); ///vc2 becomes 0 and vc has 3 items..
    return 0;
}

