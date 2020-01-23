#include<stdio.h>
int main()
{
    int arr[100][100],i,j,vertices,edge,a,b;
    scanf("%d%d",&vertices,&edge);
    for(i=1;i<=vertices;i++)
    {
        for(j=1;j<=vertices;j++)
            arr[i][j]=0;
    }
    for(i=1;i<=edge;i++)
    {
        scanf("%d%d",&a,&b);
        arr[a][b]=1;
        arr[b][a]=1;
    }
    for(i=1;i<=vertices;i++){
        for(j=1;j<=vertices;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


}
