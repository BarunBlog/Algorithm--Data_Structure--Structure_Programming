#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    string str1;
    string str2;

    cin>>n>>m;

    str1 += string(n, 'A');
    str2 += string(m, 'B');

    cout<<str1<<endl<<str2<<endl;
    
    char str3[] = "Barun Bhattacharjee";
    for(int i=0;str3[i]!='\0';i++){
        str1 += string(1, str3[i]);
    }
    cout<<str1<<endl;

    return 0;
}
