// https://leetcode.com/problems/longest-common-prefix/submissions/
// https://www.geeksforgeeks.org/longest-common-prefix-using-sorting/
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefixUsingSorting(vector<string>& strs)
{
    int ln = strs.size();

    if(ln == 0) {
        return "";
    } else if (ln == 1) {
        return strs[0];
    }

    sort(strs.begin(), strs.end());

    string str1 = strs[0], str2 = strs[ln-1];

    int i = 0;
    string result = "";
    while(i != str1.size() && str1[i] == str2[i]) {
        result += str1[i++];
    }

    return result;
}

string longestCommonPrefixUsingSubstringFind(vector<string>& strs)
{
    string result = strs[0];
    int len = result.size();

    for(int i=1; i<strs.size(); i++) {
        while(strs[i].find(result) != 0) {
            result = result.substr(0, --len);

            if(result.empty())
                return "";
        }
    }
    return result;
}

int main()
{
    vector<string> strs = {"abccd", "abc", "ab"};
    string lcp = longestCommonPrefixUsingSubstringFind(strs);

    cout<<lcp<<endl;
    return 0;
}
