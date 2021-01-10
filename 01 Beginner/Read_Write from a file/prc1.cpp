#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int T,ln,i,j=1;
    char str[5001];
    cin>>T;

    getchar();
    while(T--){
        gets(str);

        int dot=0,b=0;
        ln = strlen(str);
        for(i=0;i<ln;i++){
            if(str[i]=='.'){
                dot++;
            }
            if(str[i]=='B'){
                b++;
            }
        }
        if(dot>b || dot==0){
            cout<<"Case #"<<j++<<": N"<<endl;
        }
        else{
            cout<<"Case #"<<j++<<": Y"<<endl;
        }
    }
    return 0;
}



