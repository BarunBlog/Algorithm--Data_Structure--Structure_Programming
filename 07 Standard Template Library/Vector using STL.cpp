#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main()
{
    vector<int> ss;
    vector<int>::iterator it;
    int choice, item;
    while (1)
    {
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter value to be inserted: ";
            cin>>item;
            ss.push_back(item);
            break;
        case 2:
            cout<<"Delete Last Element Inserted:"<<endl;
            ss.pop_back();
            break;
        case 3:
            cout<<"Size of Vector: ";
            cout<<ss.size()<<endl;
            break;
        case 4:
            cout<<"Displaying Vector by Iterator: ";
            for (it = ss.begin(); it != ss.end(); it++)
                cout<<*it<<" ";
            cout<<endl;
            break;
        case 5:
            cout<<"Delete all elements of Vector."<<endl;
            while(!ss.empty())
                ss.erase(ss.begin());
            cout<<"Size of Vector: "<<ss.size()<<endl;
            break;
        case 6:
            exit(1);
            break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}
