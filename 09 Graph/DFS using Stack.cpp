#include<stdio.h>
bool visited[100];
int adj[100][100];
int st[100];
int top,node;
void push(int value)
{
    if(top>100)
        printf("Overflow\n");
    st[top++]=value;
}
int pop()
{
    if(top<0)
        printf("Underflow\n");
    return st[--top];
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
    printf("\n");
}
void DFS(int start)
{
    push(start);
    while(top!=0)
    {
       int n=pop();
       visited[n]=true;
       printf("%d\n",n);
       for(int j=1;j<=node;j++)
       {
           if(adj[n][j]==1 && !visited[j])
           {
               push(j);
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
    DFS(start);
    return 0;
}
