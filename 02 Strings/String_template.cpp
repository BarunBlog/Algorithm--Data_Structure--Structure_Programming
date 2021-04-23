#include<bits/stdc++.h>
using namespace std;

int main()
{
    ostringstream os;

    string hello;
    string first_name = "Barun";
    string last_name = "Bhattacharjee";
    int age = 34;

    os<<"Hello Mr "<<first_name<<" "<<last_name<<" how are you? Your age is "<<age;
    hello = os.str();
    cout<<hello<<endl;
}

