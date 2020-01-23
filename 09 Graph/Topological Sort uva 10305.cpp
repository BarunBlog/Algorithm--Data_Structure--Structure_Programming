#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
vector <int> v[100000],order;
int deg[1000];
int n,m;
void topsort()
{
    queue <int> q;
    for(int i=1;i<=n;i++)
    {
        if(deg[i]==0)
            q.push(i);
    }
    while(!q.empty()){
        int x = q.front();
        q.pop();
        order.push_back(x);
        for(int i=0;i<v[x].size();i++)
        {
            int xx = v[x][i];
            deg[xx]--;
            if(deg[xx]==0)
                q.push(xx);
        }
    }
}
int main()
{
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;
        for(int i=0;i<=n;i++)
            v[i].clear();
        order.clear();
        memset(deg,0,sizeof(deg));
        int a,b;
        for(int i=0;i<m;i++)
        {
            scanf("%d%d",&a,&b);
            v[a].push_back(b);
            deg[b]++;
        }
        topsort();
        for(int i=0;i<order.size();i++)
            printf("%d ",order[i]);
        printf("\n");
    }
    return 0;
}

