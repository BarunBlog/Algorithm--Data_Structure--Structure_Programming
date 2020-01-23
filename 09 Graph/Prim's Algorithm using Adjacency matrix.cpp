#include<limits>
#include <iostream>
using namespace std;
#define V 8
int graph[V][V];

int minKey(int key[], bool mstSet[])
{
   int min = INT_MAX, min_index;

   for (int v = 0; v < V; v++)
     if (mstSet[v] == false && key[v] < min)
         min = key[v], min_index = v;
   return min_index;
}

int printMST(int parent[], int n, int graph[V][V])
{
   cout<<"Edge   Weight"<<endl;
   for (int i = 1; i < V; i++)
      cout<<parent[i]<<" - "<<i<<"   "<<graph[i][parent[i]]<<endl;
}

void primMST(int graph[V][V])
{
     int parent[V];
     int key[V];
     bool mstSet[V];
     for (int i = 0; i < V; i++)
        key[i] = INT_MAX;
     key[0] = 0;
     parent[0] = -1;
     for (int count = 0; count < V-1; count++)
     {
        int u = minKey(key, mstSet);
        mstSet[u] = true;
        for (int v = 0; v < V; v++)
          if (graph[u][v] && mstSet[v] == false && graph[u][v] <  key[v])
             parent[v]  = u, key[v] = graph[u][v];
     }
     printMST(parent, V, graph);
}

int main()
{
    int node,edge,a,b,cost,i,j;
    cout<<"Enter the number of node and edge"<<endl;
    cin>>node>>edge;
    for(i=0;i<edge;i++)
    {
        cin>>a>>b>>cost;
        graph[a][b]=cost;
        graph[b][a]=cost;
    }
    primMST(graph);
    return 0;
}
