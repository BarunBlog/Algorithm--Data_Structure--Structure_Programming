#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec[1000];
    queue<int>my_Q;
    int node,edge,source,destination;
    int a,b,i,j,length,x,arr[1000];
    int level[1000],parent[1000];
    cin>>node>>edge;

    for(i=0;i<=node;i++)
        vec[i].clear();
    memset(level,0,sizeof(level));
    memset(parent,0,sizeof(parent));

    for(i=1;i<=edge;i++)
    {
        cin>>a>>b;
        vec[a].push_back(b);
    }
    cin>>source>>destination;
    my_Q.push(source);
    level[source]=0;

    while(!my_Q.empty())
    {
        int u=my_Q.front();
        my_Q.pop();
        for(j=0;j<vec[u].size();j++)
        {
            if(level[vec[u][j]]==0)
            {
                level[vec[u][j]] = level[u]+1;
                parent[vec[u][j]]=u;
                my_Q.push(vec[u][j]);
            }
        }
    }
    length=0,x=destination,i=0;
    while(x!=source)
    {
        x=parent[x];
        length++;
        arr[i++]=x;
    }
    cout<<"The length of shortest path is: "<<length<<endl;
    cout<<"The Shortest Path is: "<<endl;
    for(i=length-1;i>=0;i--)
        cout<<arr[i]<<" ";
    cout<<destination<<endl;
    return 0;
}

