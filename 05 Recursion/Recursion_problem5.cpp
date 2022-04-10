/**
Read a string from keyboard and print it in reversed order. You must not use any array to store the characters. Write a recursive solutions to solve this problem.
Input:
helloo
Output:
oolleh
*/


#include<bits/stdc++.h>

using namespace std;

void funny()
{
    char ch;
    scanf("%c", &ch);
    if(ch!='\n'){
        funny();
        printf("%c", ch);
    }
}

int main()
{
    funny();
    cout<<endl;
    return 0;
}
