/// Shortest path for acyclic graph
/// Time Complexity: O(n^2)

#include<bits/stdc++.h>
#define MAX_N 100
using namespace std;

int memo[MAX_N];
int weight[MAX_N][MAX_N];
int path[MAX_N];
int pathCounter;


int shortestPath(int u, int n)
{
    if(u == n-1){
        return 0;
    }
    if(memo[u] != -1){
        return memo[u];
    }

    int ans = INT_MAX;
    int temp;
    for(int v=0; v<n; v++){
        temp = ans;
        if(weight[u][v] != -1){
            ans = min(ans, shortestPath(v, n) + weight[u][v]);
        }
        if(temp != ans){
            path[pathCounter] = v;
        }
    }
    pathCounter++;
    memo[u] = ans;
    return ans;

}

int main()
{
    int T;

    cin>>T;
    while(T--){
        memset(memo, -1, sizeof(memo));
        memset(weight, -1, sizeof(weight));
        memset(path, 0, sizeof(path));
        pathCounter = 0;
        int node, edge, i, j, u, v, w;

        cin>>node>>edge;
        for(i=0;i<edge;i++){
            cin>>u>>v>>w;
            weight[u][v] = w;
        }
        int shortest_Path = shortestPath(0, node);
        cout<<shortest_Path<<endl<<"Path is:";
        for(i=pathCounter-1; i>=0; i--){
            cout<<" "<<path[i];
        }
        cout<<endl;
    }

    return 0;
}



