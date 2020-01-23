///FIFO queue
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>my_q1;
    queue<string>my_q2;
    string str;
    int i,a;

    a=my_q1.empty();///if queue is empty then empty() will return 1, otherwise 0...
    cout<<a<<endl;

    for(i=1;i<16;i+=2)
        my_q1.push(i);
    for(i=0;i<5;i++){
        getline(cin,str);
        my_q2.push(str);
    }
    cout<<endl;
    cout<<"Size of integer type queue is:"<<my_q1.size()<<endl;
    cout<<"Size of string type queue is:"<<my_q2.size()<<endl<<endl;

    while(!my_q1.empty())
    {
        cout<<my_q1.front()<<" ";
        my_q1.pop();
    }
    cout<<endl;
    while(!my_q2.empty())
    {
        cout<<my_q2.front()<<endl;
        my_q2.pop();
    }
    return 0;
}

