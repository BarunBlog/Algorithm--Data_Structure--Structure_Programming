#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,j;
    cin>>N;
    int start[N+1],finish[N+1];
    for(i=0;i<N;i++)
        cin>>start[i]>>finish[i];
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(finish[i]>finish[j]){
                swap(finish[i],finish[j]);
                swap(start[i],start[j]);
            }
        }
    }
    cout<<endl<<start[0]<<" "<<finish[0]<<endl;
    j=0;
    for(i=1;i<N;i++)
    {
        if(finish[j]<=start[i])
        {
            cout<<start[i]<<" "<<finish[i]<<endl;
            j=i;
        }
    }
    return 0;
}

