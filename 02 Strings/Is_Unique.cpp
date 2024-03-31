// Problem: Implement an algorithm to determine if string has all unique characters. What if
// you can not use additional data structure?

// O(n log n) solution to check if a string contains unique characters or not
#include<bits/stdc++.h>
using namespace std;

bool isUnique(string str) {
    sort(str.begin(), str.end());

    for(int i=0; i<str.size()-1; i++) {
        if (str[i] == str[i+1]) {
            return false;
        }
    }

    return true;
}

int main() {
    string str;
    cin>>str;
    cout<<isUnique(str);
}