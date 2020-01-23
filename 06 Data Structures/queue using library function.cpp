#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>Queue;
    int n;
    char query;
    cout<<"Do you want to enter the data (Y/y)?"<<endl;
    cin>>query;
    while(query=='Y' || query=='y')
    {
        cout<<"Please enter the data:";
        cin>>n;
        Queue.push(n);
        cout<<"Do you want to enter the data (Y/y)?"<<endl;
        cin>>query;
    }
    cout<<"The total size of your queue is: "<<Queue.size()<<endl;
    while(!Queue.empty())
    {
        cout<<Queue.front()<<endl;
        Queue.pop();
    }
    return 0;
}

