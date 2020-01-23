#include<bits/stdc++.h>
using namespace std;

int main()
{
    ///push() & pop()
    queue<int>Q;

    for(int i=1;i<=5;i++)
    {
        Q.push(i);
    }
    while(!Q.empty()){ ///empty() returns true when queue is empty
        cout<<Q.front()<<endl;
        Q.pop();
    }


    ///front() & back()
    Q.push(72);
    Q.push(1);

    cout << "Q.front() = " << Q.front() << endl;
    cout << "Q.back() = " << Q.back() << endl;

    Q.front() -= Q.back();
    cout<<"Q.front() is now "<<Q.front()<<endl;

    Q.back() += Q.front();
    cout << "Q.back() is now " << Q.back() << endl;


    ///size() & empty()

    queue<int>Q1;

    for(int i=0;i<5;i++)
        Q1.push(i*i);
    cout<<"Queue has "<<Q1.size()<<" elements"<<endl;

    Q1.pop();///not a good way..Can show you run-time error

    if(!Q1.empty())
        Q1.pop(); ///This is the proper way

    while(!Q1.empty()){
        Q1.pop();
    }

    if(Q1.size()==0)
        cout<<"Q1 is empty"<<endl;///Not a good way
    if(Q1.empty())
        cout<<"Q1 is empty"<<endl;///this is the proper way

    return 0;
}
