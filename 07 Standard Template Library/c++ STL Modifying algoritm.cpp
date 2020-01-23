#include<bits/stdc++.h>
#include<utility>
#include <algorithm>
#include<ext/algorithm>
using namespace std;
int main()
{
    int arr1[]={9,60,70,8,45,87,90};
    int arr2[]={0,0,0,0,0,0,0,0,0,0,0};
    vector<int>vec1(arr1,arr1+sizeof(arr1));
    vector<int>vec2(arr2,arr2+sizeof(arr2));
    vector<int>::iterator it1,it2;
    /// Copy
    copy(vec1.begin(),vec1.end(),vec2.begin());///make sure that the size of vec2 > vec1...

    /// Copy n elements
    copy_n(vec1.begin(),4,vec2.begin()); /// 9,60,70,8,0,0,0,0,0,0,0

    ///move
    string str1 = "apple orange pear grape",str2;
    vector<string>vec3,vec4;
    vec3.push_back(str1);
    move(vec3.begin(),vec3.end(),vec4.begin());

    ///Replace
    replace(vec1.begin(),vec1.end(),60,9);///replaces all 60's with 9

    ///Remove
    remove(vec1.begin(),vec1.end(),9);///removes 9 from vec1

    ///Order changing algorithms

    reverse(vec1.begin(),vec1.end());
    ///reverse(vec1.begin()+1,vec1.end()-1);
    return 0;
}


