#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>myvec;
    int k = 2;

    set<int>myset;

    myvec.push_back(2);
    myvec.push_back(4);
    myvec.push_back(6);
    myvec.push_back(1);
    myvec.push_back(3);
    myvec.push_back(7);
    myvec.push_back(8);

    vector<int>::iterator it=myvec.begin()+2;
    vector<int>::iterator number;

    //for(it=myvec.begin(); it<myvec.end(); it++){
        //if(!myset.insert(*it).second){
    number = find(it-2, it+2, 10);
    cout<<*number<<endl;
        //}
    //}

    return 0;
}
