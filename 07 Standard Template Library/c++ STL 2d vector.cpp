#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,count;
    string str;
    vector<char>vec[10201];
    while(cin>>r>>c)
    {
        if(r==0 && c==0)
            break;
        for(i=0;i<r;i++)
        {
            cin>>str;
            for(j=0;j<c;j++)
                vec[i].push_back(str[j]);
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
        for(i=0;i<r;i++)
            vec[i].clear();
    }
}

