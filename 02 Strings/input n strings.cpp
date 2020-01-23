#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{


    int T;
    cin>>T;
    while(T--){

        int n;
        string local;
        cout<<"Enter number: ";
        cin >> n;
        cin >> ws;
        for(int i = 0; i < n; i++)
        {
            cout<<"*>";
            getline(cin, local);
            //cin>>local;
            std::cout << "> " << local << std::endl;
        }
    }
    //............................
    return 0;
}

