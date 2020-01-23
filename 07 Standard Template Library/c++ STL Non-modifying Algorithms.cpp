#include<bits/stdc++.h>
#include<iostream>
#include<ext/algorithm>/// is_sorted
using namespace std;
int main()
{
    int arr[]={9,60,90,8,45,87,90,69,69,55,7};
    int arr1[]={9,60,70,8,45,87};
    vector<int>vec;
    vector<int>vec2;
    for(int i=0;i<11;i++)
        vec.push_back(arr[i]);
    vector<int>::iterator it1,it2;
   // pair<vector<int>::iterator,vector<int>::iterator>my_itr;

    /**int n=count(vec.begin(),vec.end(),69);/// counts 69 in vec. 2
    ///int n=count(vec.begin()+2,vec.end()-1,69)/// 2
    cout<<n<<endl;

    it1=max(vec.begin(),vec.end());/// 90
    //it1=max_element(vec.begin()+1,vec.end()-2);//90
    cout<<*it1<<endl;*/

    it1=min_element(vec.begin(),vec.end());///7
    //int x=distance(vec.begin(),it1);///7
    cout<<*it1<<endl;

    //for(it1=vec.begin();it1!=vec.end();it1++)
      //  cout<<*it1<<" ";
    ///linear search(when data is not sorted)
    /*it1=find(vec.begin(),vec.end(),55);
    cout<<*it1<<endl;
    it1=search_n(vec.begin(),vec.end(),2,69);///finds consecutive 2 items that is 69

    int a=is_sorted(vec.begin(),vec.end());///check if vector is sorted or not
*/
    return 0;
}

