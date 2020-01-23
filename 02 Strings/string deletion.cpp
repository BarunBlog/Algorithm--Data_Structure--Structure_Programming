#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,j,ln;
    getline(cin,str);
    ln=str.size();
    for(i=0;i<ln/2;i++)
    {
        str.erase(str.begin());
    }
    cout<<str<<endl;
}
