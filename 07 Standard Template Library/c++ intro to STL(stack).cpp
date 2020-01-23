/// LIFO stack
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>my_s1;
    stack<string>my_s2;
    string str;
    int i,a;

    a=my_s1.empty();///if queue is empty then empty() will return 1, otherwise 0...
    cout<<a<<endl;

    for(i=1;i<16;i+=2)
        my_s1.push(i);
    for(i=0;i<5;i++){
        getline(cin,str);
        my_s2.push(str);
    }
    cout<<endl;
    cout<<"Size of integer type stack is:"<<my_s1.size()<<endl;
    cout<<"Size of string type stack is:"<<my_s2.size()<<endl<<endl;

    while(!my_s1.empty())
    {
        cout<<my_s1.top()<<" ";
        my_s1.pop();
    }
    cout<<endl;
    while(!my_s2.empty())
    {
        cout<<my_s2.top()<<endl;
        my_s2.pop();
    }
    return 0;
}

