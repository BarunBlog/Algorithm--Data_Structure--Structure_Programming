#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main()
{
    queue<string>Queue;
    string n;
    char query;
    cout<<"Do you want to enter the data (Y/y)?"<<endl;
    cin>>query;
    while(query=='Y' || query=='y')
    {
        cout<<"Please enter your name: ";
        cin>>n;
        Queue.push(n);
        cout<<"Do you want to enter the data (Y/y)?"<<endl;
        cin>>query;
    }
    cout<<"The total size of your queue"<<Queue.size()<<endl;
    while(!Queue.empty())
    {
        cout<<Queue.front()<<endl;
        Queue.pop();
    }
    return 0;
}


