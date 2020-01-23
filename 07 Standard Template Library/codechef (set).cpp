#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,arr[27],i,ln,count;
    char str[50001];
    char str1[27]={"abcdefghijklmnopqrstuvwxyz"};
    set<char>myset;
    cin>>T;
    while(T--)
    {
        myset.clear();
        for(i=0;i<26;i++)
            cin>>arr[i];
        cin>>str;
        ln=strlen(str);
        for(i=0;i<ln;i++)
            myset.insert(str[i]);
        count=0;
        for(i=0;i<26;i++)
        {
            if(myset.find(str1[i])==myset.end())
                count+=arr[i];
        }
        cout<<count<<endl;
    }
    return 0;
}

