/**
Write a recursive program that determines whether a given sentence is palindromic or not just considering the alpha-numeric characters ('a'-'z'), ('A'-'Z'), ('0'-'9').
Input:
madam, i'm adam
hulala
Output:
palindromic
not palindromic
*/


#include<bits/stdc++.h>
using namespace std;

int is_alpha_numeric(char ch)
{
    if(
       (ch>='a' && ch<='z') ||
       (ch>='A' && ch<='Z') ||
       (ch>='0' && ch<='9')
    ){
        return 1;
    }
    else{
        return 0;
    }
}
void is_palindrome(string str1, int i, int j)
{
    if( is_alpha_numeric( str1[i] ) && is_alpha_numeric( str1[j] ) ){
        if(str1[i] != str1[j]){
            cout<<"not palindromic"<<endl;
            return;
        }
        else{
            if(j-i <= 1){
                cout<<"palindromic"<<endl;
                return;
            }
            is_palindrome(str1, i+1, j-1);
        }
    }
    else if(!is_alpha_numeric( str1[i] )){
        is_palindrome(str1, i+1, j);
    }
    else if(!is_alpha_numeric( str1[j] )){
        is_palindrome(str1, i, j-1);
    }
    else if(j==i){
        cout<<"not palindromic"<<endl;
        return;
    }
}
int main()
{
    string str1;
    getline(cin, str1);
    is_palindrome(str1, 0, str1.size()-1);
    return 0;
}
