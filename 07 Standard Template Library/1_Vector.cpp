#include<bits/stdc++.h>
using namespace std;

int main()
{


    vector<int>Vec1,Vec2; /// 1D Vector

    vector<int>Vec3[100];
    vector<vector<int> >Vec4; /// 2D Vector

    vector<int>Vec5[100][100];
    vector<vector<vector<int> > >Vec6; ///3D Vector
    Vec1.push_back(2);
    Vec1.push_back(4);
    Vec1.push_back(6);

    int i,a;
    for(i=0;i<5;i++)
    {
        cin>>a;
        Vec1.push_back(a);
    }
    vector<int>::iterator it;
    for(it=Vec1.begin();it!=Vec1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<"This Vec1 Vector has "<<Vec1.size()<<" elements"<<endl;

    Vec1[1]=3;
    Vec1[3]=4;

    for(it=Vec1.begin();it!=Vec1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<"Some elements has changed"<<endl;

    Vec2=Vec1;
    for(it=Vec2.begin();it!=Vec2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<"This is Vec2"<<endl;


    return 0;
}

