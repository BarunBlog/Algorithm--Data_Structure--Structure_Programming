#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>mystack;
    for(int i=0;i<5;i++)
        mystack.push(i);
    cout<<"The stack has "<<mystack.size()<<" elements"<<endl;
    cout<<"Now popping out elements...";

    while(!mystack.empty()){
        cout<<" "<<mystack.top();
        mystack.pop();
    }
    cout<<endl;

    mystack.push(100);
    mystack.top()+=1000;///changing the value of top

    cout<<"Now top is: "<<mystack.top()<<endl;
    mystack.pop();

    /// not a good way to check if stack is empty
    if(mystack.size()==0)
        cout<<"Stack is empty"<<endl;
    /// better we do this
    if(mystack.empty())
        cout<<"Stack is empty"<<endl;
}
