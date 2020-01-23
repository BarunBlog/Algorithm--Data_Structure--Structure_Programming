#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///simple construction
    pair<int,char>mypair(200,'B');
    cout<<mypair.first<<" "<<mypair.second<<endl;
    mypair.first=100;
    mypair.second='A';
    cout<<mypair.first<<" "<<mypair.second<<endl;    mypair=make_pair(300,'C');
    cout<<mypair.first<<" "<<mypair.second<<endl<<endl;

    pair<int, int> px, py;
    pair<int, int> p1(23,43);
    pair<int, int> p2 = pair<int, int>(234, 534);

    px = p1;
    cout<<py.first<<" "<<py.second<<endl;
    cout<<px.first<<" "<<px.second<<endl;

    py.first=p2.first * px.second, py.second=p2.second * px.first;
    cout<<"py: ("<<py.first<<", "<<py.second<<")\n";

    ///bit more complex
    pair< pair<int,int>, pair<int,int> >p3;
    p3 = pair< pair<int, int>, pair< int, int > > (px, py);
    cout<<"p3: ((";
    cout<<p3.first.first<<", "<<p3.first.second<<"), (";
    cout<<p3.second.first<<", "<<p3.second.second<<"))\n";

    ///using make_pair()
    pair< double, pair<string,int> >p4;
    p4 = make_pair(3.1416, make_pair("pi",5));
    cout<<"This is "<<p4.second.first<<", value: "<<p4.first;
    cout<<" precision: "<<p4.second.second<<" digits\n";
    return 0;

}
