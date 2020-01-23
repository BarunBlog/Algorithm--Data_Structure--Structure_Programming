#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>first;
    deque<int>mydeque(3,100);
    stack<int>second(mydeque);
    stack<int>third(second);

    stack<int,deque<int> >fourth;
    deque<int>newdeque(10,100);
    stack<int,deque<int> >fifth(newdeque);


    stack<int,vector<int> >sixth;
    vector<int>myVec(2,100);
    stack<int,vector<int> >seventh(myVec);

    stack<int,list<int> >eighth;
    list<int>mylist(4,100);
    stack<int,list<int> >ninth(mylist);

    stack<int>tenth=first;

    return 0;
}

