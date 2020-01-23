///Sequence containers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_front(1);
    dq.push_front(3);
    dq.push_back(6);
    dq.push_back(9);
    dq.push_front(5);
    dq.push_back(7);
    cout<<dq.size()<<endl;
    for(deque<int>::iterator it=dq.begin();it!=dq.end();it++)
        cout<<*it<<" ";
    cout<<endl;
   /// cout<<dq[4]<<endl;
    sort(dq.begin(),dq.end());
    deque<int>dq2(dq);
    for(deque<int>::iterator it=dq2.begin();it!=dq2.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    dq.clear();
    dq2.swap(dq);
    return 0;
}
