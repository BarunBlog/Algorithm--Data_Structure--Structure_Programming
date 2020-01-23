#include<bits/stdc++.h>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    map<string,string>mp;
   // mp.clear();
    string str1,str2,str3;
    int ln,i,j,ck,a,b;
    while(getline(cin,str1) && str1[0]!='\0')
    {
        ck=0;
         for(i=0,j=0;str1[i]!='\0';i++)
         {
            if(str1[i]==' '){
                ck=1;
                str2[i]='\0';
                a=i;
                continue;
            }
            if(ck==0)
                str2[i]=str1[i];
            if(ck==1){
                str3[j]=str1[i];
                j++;
            }
         }
         str3[j]='\0';
        mp.insert(make_pair(str3,str2));
    }
    map<string,string>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
        cout<<(*it).first<<" "<<(*it).second<<endl;
    /*while(getline(cin,str3)){
            map<string,string>::iterator it;
            it=mp.find(str3);
            if(it==mp.end())
                cout<<"eh"<<endl;
            else
                cout<<mp[str3]<<endl;
        }*/
    return 0;
}


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>mp;
    string str,str1,str2;
    int ln,i,j,ck;
    while(getline(cin,str))
    {
        ln=str.size();
        ck=0;
        for(i=0,j=0;i<ln;i++)
        {
            if(str[i]==' '){
                ck=1;
                cout<<"*"<<endl;
                str1[i]='\0';
                continue;
            }
            if(ck==0)
                str1[i]=str[i];
            if(ck==1)
                str2[j++]=str[i];
        }
        str2[j]='\0';
        cout<<ck<<endl;
        //cout<<str<<" "<<str2<<endl;
        map<string,string>::iterator it;

        if(ck==1)
            mp.insert(make_pair(str2,str1));
        if(ck==0){
            it=mp.find(str);
            if(it!=mp.end())
                cout<<(*it).second<<endl;
            if(it==mp.end())
                cout<<"eh"<<endl;
        }
    }
    return 0;
}
*/

