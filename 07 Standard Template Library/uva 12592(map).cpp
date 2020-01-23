#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>mymap;
    int N,Q,i;
    string str1,str2;
    while(cin>>N)
    {
        mymap.clear();
        getchar();
        for(i=0;i<N;i++)
        {
            getline(cin,str1);
            getline(cin,str2);
            mymap.insert(make_pair(str1,str2));
        }
        map<string,string>::iterator it;
        cin>>Q;
        getchar();
        for(i=0;i<Q;i++)
        {
            getline(cin,str1);
            it=mymap.find(str1);
            cout<<(*it).second<<endl;
        }
    }
    return 0;
}

