#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<string>stk;
    string n;
    char query;
    cout<<"Do you want to enter data (Y/y)?"<<endl;
    cin>>query;
    while(query=='Y' || query=='y')
    {
        cout<<"Please enter your name:";
        cin>>n;
        stk.push(n);
        cout<<"Do you want to enter data (Y/y)?"<<endl;
        cin>>query;
    }
    cout<<"The total size of your stack is "<<stk.size()<<endl;
    while(!stk.empty())
    {
        cout<<stk.top()<<endl;
        stk.pop();
    }
    return 0;
}

