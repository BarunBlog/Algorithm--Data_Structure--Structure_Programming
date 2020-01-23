#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>stk;
    int n;
    char query;
    cout<<"Do you want to enter data (Y/y)?"<<endl;
    cin>>query;
    while(query=='Y' || query=='y')
    {
        cout<<"Please enter the data:";
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

