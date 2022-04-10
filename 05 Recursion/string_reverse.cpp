#include<bits/stdc++.h>
using namespace std;

string rev_string(string str1, int ln, string str2)
{
    if(ln<0){
        return str2;
    }
    else{
        str2 += str1[ln];
        return rev_string(str1, ln-1, str2);
    }
}
int main()
{
    string str1;
    cin>>str1;
    string str2 = rev_string(str1, str1.size()-1, "");
    cout<<str2<<endl;
    return 0;
}
