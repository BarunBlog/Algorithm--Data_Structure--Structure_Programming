#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ln1,ln2,i,j;
    string str1, str2;
    cin>>str1;
    cin>>str2;

    ln1 = str1.size();
    ln2 = str2.size();

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    if(str1.compare(str2)==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
