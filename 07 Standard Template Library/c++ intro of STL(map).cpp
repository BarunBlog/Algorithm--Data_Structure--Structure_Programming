///Associative Containers(Binary Tree)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mymap; ///char:- key & int:- value..pair of key and value
    mymap.insert(pair<char,int>('a',100));/// does not allow duplicate keys..
    mymap.insert(make_pair('z',200));
    mymap.insert(make_pair('c',350));
    mymap.insert(pair<char,int>('d',400));
    map<char,int>::iterator it=mymap.begin();///it points to beginning pair of set, char & int..
    mymap.insert(it,pair<char,int>('b',300));///inserts to the beginning..

    for(it=mymap.begin();it!=mymap.end();it++)/// map sort according to key of the pair..
        cout<<(*it).first<<" "<<(*it).second<<endl;

    it=mymap.find('a');///searches the key
    cout<<(*it).first<<endl;
    return 0;
}

