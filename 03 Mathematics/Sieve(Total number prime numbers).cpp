#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool status[10000001];
int sum[10000000];
void siv(int N)
{
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2)
        status[i]=1;
	for(int i=3;i<=sq;i+=2){
			for(int j=i*i;j<=N;j+=i)
                status[j]=1;
	}
	status[1]=1;
	int j=0;
	for(int i=1;i<=N;i++){
	    sum[i]=j;
        if(status[i]==0)
            j++;
	}
}
int main()
{
    int N,T;
    siv(10000000);
    cin>>T;
    while(T--){
        cin>>N;
        cout<<sum[N]<<endl;
    }
    return 0;
}

