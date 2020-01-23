#include <iostream>
#include <set>
#include <cstdlib>
using namespace std;
int main()
{
    set<int> st;
    set<int>::iterator it;
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
            st.insert(item);
            break;
        case 2:
            cout<<"Enter the element to be deleted: ";
            cin>>item;
            st.erase(item);
            break;
        case 3:
            cout<<"Size of the Set: ";
            cout<<st.size()<<endl;
            break;
        case 4:
	    cout<<"Enter the element to be found: ";
	    cin>>item;
            it = st.find(item);
	    if (it != st.end())
                cout<<"Element "<<*it<<" found in the set" <<endl;
            else
                cout<<"No Element Found"<<endl;
            break;
        case 5:
            cout<<"Displaying Map by Iterator: ";
            for (it = st.begin(); it != st.end(); it++)
                cout <<*it<<" ";
            cout<<endl;
            break;
        case 6:
            cout<<*it<<" "<<endl;
            cout<<"Delete all elements of Set"<<endl;
            while(!st.empty())
                st.erase(st.begin());
            cout<<"Size of the Set: "<<st.size()<<endl;
        case 7:
            exit(1);
	    break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}
