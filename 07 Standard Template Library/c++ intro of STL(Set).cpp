///Associative Containers(Binary Tree)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>myset;///set does not allow duplicate values
    myset.insert(3);
    myset.insert(1);
    myset.insert(6);
    myset.insert(4);///Automatically insert sorted elements O(log(n))..
    set<int>::iterator it;
    for(it=myset.begin();it!=myset.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    it=myset.find(1);///O(log(n))..
    cout<<*it<<endl;
    pair<set<int>::iterator,bool> ret;/// checks if the insertion is succeeded or failed
    ret=myset.insert(3);///insert() returns 2 values, the value and it check if duplicate or not
    if(ret.second==false)
        it=ret.first;/// it now points to element 3.
    cout<<*it<<endl;
    myset.insert(it,8);///expected: 1 3 8 4 6(wrong). ans: 1 3 4 6 8..
    myset.erase(it);/// remove 3..
    myset.erase(6);
    for(it=myset.begin();it!=myset.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}

