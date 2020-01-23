#include<stdio.h>
bool visited[100];
int adj[100][100];
int Queue[100];
int front,rear,node;
void enqueue(int value)
{
    Queue[rear++]=value;
}
int dequeue()
{
    return Queue[front++];
}
void adjacency()
{
    int i,edge,a,b;
    scanf("%d%d",&node,&edge);
    for(i=1;i<=edge;i++)
    {
        scanf("%d%d",&a,&b);
        adj[a][b]=1;
        adj[b][a]=1;
    }
}
void BFS(int start)
{
    enqueue(start);
    while(front!=rear)
    {
       int n=dequeue();
       visited[n]=true;
       printf("%d\n",n);
       for(int j=1;j<=node;j++)
       {
           if(adj[n][j]==1 && !visited[j])
           {
               enqueue(j);
               visited[j]=true;
           }
       }
    }
}
int main()
{
    int start;
    scanf("%d",&start);
    adjacency();
    BFS(start);
    return 0;
}

