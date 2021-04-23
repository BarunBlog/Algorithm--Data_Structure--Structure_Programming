#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Properties for graph1
    int node1, edges1;
    cin>>node1>>edges1;

    int adjacency1[node1+1][node1+1] = {0};
    int degree1[node1+1]={0};
    int a,b,i,j;
    int number_of_one_in_g1 = 0;

    for(i=0;i<edges1;i++){
        cin>>a>>b;
        adjacency1[a][b] = 1;
        adjacency1[b][a] = 1;
        degree1[a]++;
        degree1[b]++;
        number_of_one_in_g1 += 2;
    }

    // Properties for graph2
    int node2, edges2;
    cin>>node2>>edges2;

    int adjacency2[node2+1][node2+1] = {0};
    int degree2[node2+1]={0};
    int number_of_one_in_g2 = 0;


    for(i=0;i<edges2;i++){
        cin>>a>>b;
        adjacency2[a][b] = 1;
        adjacency2[b][a] = 1;
        degree2[a]++;
        degree2[b]++;
        number_of_one_in_g2 += 2;
    }

    if(node1!=node2 || edges1!=edges2 || number_of_one_in_g1 != number_of_one_in_g2){
        cout<<"Graphs are not isomorphic"<<endl;
        return 0;
    }
    int check[node1+1] = {0};
    int ck = 0;
    for(i=0;i<node1;i++){
        int deg = degree1[i];
        int deg_array[deg+1] = {0};
        int k=0;
        for(j=0;j<node1;j++){
            if(adjacency1[i][j]==1){
                deg_array[k++] = degree1[j];
            }
        }
        for(j=0;j<node2;j++){

        }
    }


    return 0;
}



