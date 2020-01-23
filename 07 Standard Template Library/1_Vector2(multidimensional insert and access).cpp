#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int> > V2D;
    /// a vector where each element is a vector

    vector<int> temp;
    for(int i=0;i<10;i++)
    {
        temp.clear();
        for(int j=0;j<=i;j++)
        {
            temp.push_back(j+1);
        }
        V2D.push_back(temp);
    }

    ///access using iterator
    vector<vector<int> >::iterator outer;
    vector<int>::iterator inner;
    cout<<"Using iterator:"<<endl;
    for(outer=V2D.begin();outer!=V2D.end();outer++)
    {
        for(inner=outer->begin();inner!=outer->end();inner++)
        {
            cout<<*inner<<" ";
        }
        cout<<endl;
    }

    ///Using index
    cout<<"\nUsing index:"<<endl;
    for(int i=0;i<V2D.size();i++)
    {
        for(int j=0;j<V2D[i].size();j++)
        {
            cout<<V2D[i][j]<<" ";
        }
        cout<<endl;
    }
    V2D[3][4]=100;///value will be changed
    return 0;
}
