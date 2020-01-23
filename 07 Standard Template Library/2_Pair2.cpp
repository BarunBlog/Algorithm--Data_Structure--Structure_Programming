#include<bits/stdc++.h>
using namespace std;

#define pii_1 pair<int, int>
#define pii_2 pair<pii_1, int>
#define f first
#define s second

int main()
{
    pii_2 p1;
    pii_1 p2;
    cin>>p2.f>>p2.s;
    p1 = pii_2(p2, p2.s * p2.f);
    cout<<"entry: "<< p1.f.f<<", "<<p1.f.s<<endl;
    cout<<"produc: "<<p1.s<<endl;
    return 0;

}

