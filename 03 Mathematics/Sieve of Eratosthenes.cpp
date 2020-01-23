#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void siv(int N)
{
    bool status[N+1];
    memset(status,false,sizeof(status));///memset doesn't work for big range values..like 20000000
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2)
        status[i]=1;
	for(int i=3;i<=sq;i+=2){
			for(int j=i*i;j<=N;j+=i)
                status[j]=1;
	}
	status[1]=1;
	for(int i=2;i<=N;i++)
        if(status[i]==0)
            printf("%d ",i);
    printf("\n");
}
int main()
{
    int N;
    while(scanf("%d",&N)==1){
    siv(N);
    }
    return 0;
}
