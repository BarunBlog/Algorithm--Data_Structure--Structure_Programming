#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,char>mypair(200,'B');
    cout<<mypair.first<<" "<<mypair.second<<endl;
    mypair.first=100;
    mypair.second='A';
    cout<<mypair.first<<" "<<mypair.second<<endl;    mypair=make_pair(300,'C');
    cout<<mypair.first<<" "<<mypair.second<<endl;
    return 0;
}

