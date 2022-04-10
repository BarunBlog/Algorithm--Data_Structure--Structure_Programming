/// Complexity O(n^2)
#include<bits/stdc++.h>
using namespace std;

void substring(string str)
{
    int ln = str.size();
    int i,j;

    int count = 0;
    for(i=0; i<ln; i++){
        for(j=1; j<=ln-i; j++){
            cout<<str.substr(i,j)<<endl;
            count++;
        }
        cout<<endl;
    }
    cout<<"Found "<<count<<" Substrings"<<endl;

}

int main()
{
    int T;
    cin>>T;

    while(T--){
        string str;
        cin>>str;
        substring(str);
    }

    return 0;
}

