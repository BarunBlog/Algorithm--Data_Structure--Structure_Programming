///Transform a left aligned text into a right aligned one where the maximum size of output window is given.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input1.txt","r",stdin);

    string str;
    getline(cin, str);
    int len = str.size();
    int i,j;

    int extra_space = len%80;

    for(i=0;i<len-extra_space;i++){
        cout<<str[i];
    }
    cout<<setw(80-extra_space+1);
    for(j=i;j<len;j++){
        cout<<str[j];
    }
    cout<<endl;

    return 0;
}




