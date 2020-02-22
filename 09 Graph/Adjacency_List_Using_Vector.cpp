#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge,i,j;
    cin>>node>>edge;
    vector<int>myVec[node+1];


    int a,b;
    for(i=1;i<=edge;i++){
        cin>>a>>b;
        myVec[a].push_back(b);
        myVec[b].push_back(a);
    }

    cout<<endl;
    vector<int>::iterator it;
    for(i=1;i<=node;i++){
        cout<<"Adjacency list of vertex "<<i<<": ";
        for(it=myVec[i].begin();it!=myVec[i].end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    return 0;
}

