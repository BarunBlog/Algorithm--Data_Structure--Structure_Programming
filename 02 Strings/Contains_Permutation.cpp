// Problem: Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

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


// O(str2 * str1) Solution to check str2 contains permutation of str1
bool containsPermutation(string str1, string str2) {
    int len1 = str1.size();
    int len2 = str2.size();

    if (len1 > len2) {
        return false;
    }

    for (int i=0; i<len2; i++) {
        string subStr = str2.substr(i, len1);

        if (isPermutation(str1, subStr)) {
            return true;
        }
    }

    return false;
}

int main() {
    string str1, str2;
    cin>> str1>> str2;

    if (containsPermutation(str1, str2)) {
        cout<<"The str2 contains permutation of the str1"<<endl;
    } else {
        cout<<"The str2 does not contains the permutation of the str1"<<endl;
    }
}