#include<bits/stdc++.h>
using namespace std;
void knapsack(int n,int weight[],float value[],int capacity)
{
   float tw=0.0, tp = 0.0;
   int i, j;
   for(i=0;i<n;i++)
   {
       if(tw+weight[i]>capacity)
       {
           value[i]=(value[i]/weight[i])*(capacity-tw);
           tw+=(capacity-tw);
           tp+=value[i];
           break;
       }
       tw+=weight[i];
       tp+=value[i];
   }
   printf("\nMaximum profit is: %.2f\n", tp);
}
int main()
{
    int N,capacity,weight[20],i,j;
    float density[20],value[20];
    cin>>N>>capacity;
    for(i=0;i<N;i++)
        cin>>weight[i]>>value[i];
    for(i=0;i<N;i++)
        density[i]=value[i]/weight[i];
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(density[i]<density[j])
            {
                swap(density[i],density[j]);
                swap(weight[i],weight[j]);
                swap(value[i],value[j]);
            }
        }
    }
    knapsack(N,weight,value,capacity);
    return 0;
}

