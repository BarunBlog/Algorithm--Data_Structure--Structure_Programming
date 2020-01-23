#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int status[10001]={0};

int isPrime(int a)
{
    if(status[a]==0)
        return true;
    else
        return false;
}

void generatePrime(int n)
{
    int i,j;
    int sq = sqrt(n);

    for(i=4;i<=n;i+=2){
        status[i]=1;
    }
    for(i=3;i<=sq;i+=2){
        for(j=i*i;j<=n;j+=i){
            status[j]=1;
        }
    }
    for(i=2;i<=n;i++){
        if(status[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<endl;
}

int main()
{
    int i,j,a;
    generatePrime(10000);

    cin>>a;
    bool state = isPrime(a);
    cout<<state<<endl;
    return 0;
}

