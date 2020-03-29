#include<bits/stdc++.h>
using namespace std;

string getPrefix(string pattern)
{
    int ln = pattern.size();
    char str[ln];
    int i;
    for(i=0;i<ln-1;i++){
        str[i] = pattern[i];
    }
    str[i]='\0';
    string str2 = str;

    return str2;
}

char lastSymbol(string pattern)
{
    int ln = pattern.size();

    if(ln==1){
        return 'n';
    }
    return pattern[ln-1];
}

int symbolToNumber(char ch)
{
    if(ch=='A')
        return 0;
    if(ch=='C')
        return 1;
    if(ch=='G')
        return 2;
    if(ch=='T')
        return 3;
}

int patternToNumber(string pattern)
{
    char symbol = lastSymbol(pattern);
    string prefix = getPrefix(pattern);

    if(symbol=='n')
        return 0;
    return 4*patternToNumber(prefix)+symbolToNumber(symbol);
}

int main()
{
    int number;
    string pattern;
    cin>>pattern;

    number = patternToNumber(pattern);

    cout<<"Pattern to Number is: "<<number<<endl;
    return 0;
}





