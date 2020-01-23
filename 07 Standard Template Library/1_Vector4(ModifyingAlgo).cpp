#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    vector<int>Vec;
    for(i=1;i<=20;i++)
    {
        Vec.push_back(i);
    }
    vector<int>::iterator it;
    for(it=Vec.begin();it!=Vec.end();it++)
    {
        if(*it%2==0)
        {
            Vec.erase(it);///always returns the next valid iterator
            it--;
        }
    }
    Vec.erase(Vec.begin(),Vec.begin()+5);

    for(it=Vec.begin();it!=Vec.end()-1;it++)
    {
        cout<<*it<<" ";
    }
    cout<<*it<<endl;
    Vec.clear();
    Vec.resize(10);

    Vec.push_back(2);
    Vec.push_back(3);
    Vec.push_back(4);
    cout<<"size: "<<Vec.size()<<endl<<endl;

    int n, a;
    vector< int > v;
    while(cin >> n) {
        v.resize(n);
        for(a = 0; a < n; a++) {
            cin >> v[a];
        }
        for(a = 0; a < n; a++) {
            cout << v[a] << endl;
        }
    }
    return 0;
}
