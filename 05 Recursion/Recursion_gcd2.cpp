// Using modulo operator.


#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
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
