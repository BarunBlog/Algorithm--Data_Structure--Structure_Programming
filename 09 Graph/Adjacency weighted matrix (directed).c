#include<stdio.h>
int main()
{
    int arr[100][100],i,j,node,edge,a,b,cost;
    scanf("%d%d",&node,&edge);
    for(i=1;i<=edge;i++)
    {
        scanf("%d%d%d",&a,&b,&cost);
        arr[a][b]=cost;
    }
    for(i=0;i<node;i++)
    {
        for(j=0;j<node;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}

