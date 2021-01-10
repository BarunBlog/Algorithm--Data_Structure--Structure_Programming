#include<bits/stdc++.h>
using namespace std;

string reverse_string(string str)
{
    int i,j=0, len;

    for(i=0;str[i]!='\0';i++);

    len = i;
    char str1[len+1];
    for(i=len-1;i>=0;i--)
        str1[j++] = str[i];

    str1[j] = '\0';

    string rev_string=str1;

    return rev_string;
}


int main()
{
    string str;
    cin>>str;

    string str_rev = reverse_string(str);
    cout<<str_rev<<endl;

    return 0;
}

