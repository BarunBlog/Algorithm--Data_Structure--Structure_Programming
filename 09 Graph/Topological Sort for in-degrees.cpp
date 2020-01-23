///Barun
/// Topological Sort for in-degrees...
#include<bits/stdc++.h>
using namespace std;
vector<int>v[100000],order;
int deg[100000];
int n,m;
void topsort(){

    queue<int>q;

    for(int i=1;i<=n;i++){
        if(deg[i]==0){
            q.push(i);
        }
    }

    while(!q.empty()){

        int x = q.front();
        q.pop();
        order.push_back(x);
        for(int i=0;i<v[x].size();i++){
            int xx = v[x][i];
            deg[xx]--;
            if(deg[xx]==0) q.push(xx);
        }
    }
}
int main(){
    cout<<"Enter The Node And The Number of Edges"<<endl;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        deg[b]++;
    }

    topsort();
    if(order.size()!=n) {
        cout<<"NOT A DAG"<<endl;
        return 0;
    }

    for(int i=0;i<order.size();i++){
        cout<<order[i]<<endl;
    }
    return 0;
}

