// Problem: Create a function called isPermutation to check if two strings are permutation of each other.
// All characters are in small letter.

#include<bits/stdc++.h>
using namespace std;

// O(n) solution to check if the strings are permutation of each other
bool isPermutation(string str1, string str2) {
    if (str1.size() != str2.size()) {
        return false;
    }

    int len = str1.size();

    int str1CharCount[26] = {0};
    int str2CharCount[26] = {0};

    for (int i=0; i<len; i++) {
        str1CharCount[ str1[i] - 'a' + 1 ]++;
        str2CharCount[ str2[i] - 'a' + 1 ]++;
    }

    for (int i=0; i<26; i++) {
        if (str1CharCount[i] != str2CharCount[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string str1, str2;
    cin>>str1>>str2;

    if (isPermutation(str1, str2)) {
        cout<<"The strings are permutation of each other"<<endl;
    } else {
        cout<<"The strings are not permutation of each other"<<endl;
    }
}