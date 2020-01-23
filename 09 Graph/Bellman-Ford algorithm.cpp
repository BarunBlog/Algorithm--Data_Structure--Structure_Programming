#include<iostream>
#include<limits.h>
using namespace std;
int Vertices,Edge;
void FinalSolution(int StorDistance[])
{
    int sum=0;
    cout<<"\nVertex\tDistance from Source Vertex"<<endl;
    for(int i=0;i<Vertices;i++){
        cout<<i<<"\t\t"<<StorDistance[i]<<endl;
        sum=sum+StorDistance[i];
    }
    cout<<"\nShortest Path is: "<<sum<<endl;
}
void BellmanFord(int graph[20][20],int source)
{
    int StorDistance[20],i,j,k,u,v,weight;
    /// Step 1
    for(i=0;i<Vertices;i++)
        StorDistance[i]=INT_MAX;
    StorDistance[source]=0;
    ///Step 2
    for (i = 1; i <= Vertices-1; i++)
        {
            for (j = 0; j < Vertices; j++)
            {
                for(k=0;k<Vertices;k++)
                {
                    if(graph[j][k]!=0){
                        u = j;
                        v = k;
                        weight = graph[j][k];
                        if(StorDistance[u]+weight<StorDistance[v])
                            StorDistance[v]=StorDistance[u]+weight;
                    }
                }
            }
        }
    ///Step 3
    for (j = 0; j < Vertices; j++)
            {
                for(k=0;k<Vertices;k++)
                {
                    if(graph[j][k]!=0){
                        u = j;
                        v = k;
                        weight = graph[j][k];
                        if(StorDistance[u]+weight<StorDistance[v])
                            cout<<"This graph contains negative edge cycle"<<endl;
                    }
                }
            }
    FinalSolution(StorDistance);
}

int main()
{
    int graph[20][20]={0},i,j,a,b,cost,source;
    cin>>Vertices>>Edge>>source;
    for(i=0;i<Edge;i++)
    {
        cin>>a>>b>>cost;
        graph[a][b]=cost;
    }
    BellmanFord(graph,source);
    return 0;
}
/**
Sample Input:

5
10
0
0 1 6
0 2 7
1 3 5
1 4 -4
1 2 8
3 1 -2
4 3 7
4 0 2
2 3 -3
2 4 9

*/
