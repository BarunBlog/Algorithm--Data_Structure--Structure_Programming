
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a==b){
        return a;
    }
    else if(a>b){
        return gcd(a-b, b);
    }
    else{
        return gcd(a, b-a);
    }

}

int main()
{
    int a,b;
    cin>>a>>b;
    int g = gcd(a, b);

    cout<<g<<endl;

    return 0;
}
