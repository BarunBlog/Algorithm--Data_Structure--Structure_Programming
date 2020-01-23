#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>mydeck(3,100);///deque with 3 elements of value 100
    list<int>mylist(2,200);///list with 2 elements

    deque<int>::iterator it;
    for(it=mydeck.begin();it!=mydeck.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    ///implicit declaration
    queue<int>first;///empty queue
    queue<int>second(mydeck);
    queue<int>third(second);

    queue<int, list<int> >fourth;/// empty queue with list as underlying container
    queue<int, list<int> >fifth(mylist);///from mylist
    queue<int, deque<int> >sixth;///empty queue
    queue<int, deque<int> >seventh(mydeck);

    queue<int>eigth = first;


    cout << "size of first: " << first.size() << '\n';
    cout << "size of second: " << second.size() << '\n';
    cout << "size of third: " << third.size() << '\n';
    cout << "size of fourth: " << fourth.size() << '\n';

    return 0;
}
