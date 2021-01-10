///Transform a left aligned string into center aligned string
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int len = str.size();
    cout<<setw(40+(len/2))<<str<<endl;

    return 0;
}

