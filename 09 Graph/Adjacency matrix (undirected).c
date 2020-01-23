#include<stdio.h>
int main()
{
    int arr[100][100]={0},i,j,node,edge,a,b;
    scanf("%d%d",&node,&edge);
    for(i=1;i<=edge;i++)
    {
        scanf("%d%d",&a,&b);
        arr[a][b]=1;
        arr[b][a]=1;
    }
    for(i=1;i<=node;i++)
    {
        for(j=1;j<=node;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}
