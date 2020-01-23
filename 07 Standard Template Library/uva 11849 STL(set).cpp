/// Time 1.730. rank 3038..
/**#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,M,a,i,count;
    while(cin>>N>>M){
        if(N==0 && M==0)
            break;
        set<long long int>myset;
        set<long long int>myset1;
        for(i=0;i<N;i++)
        {
            cin>>a;
            myset.insert(a);
        }
        for(i=0;i<M;i++)
        {
            cin>>a;
            myset1.insert(a);
        }
        set<long long int>::iterator it;
        set<long long int>::iterator it1;
        count=0;
        for(it=myset.begin();it!=myset.end();it++)
        {
            if(myset1.find(*it)!=myset1.end())
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}*/
/// Time 1.360 Rank: 2181
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,M,a,i,count;
    while(cin>>N>>M){
        if(N==0 && M==0)
            break;
        set<long long int>myset;
        for(i=0;i<N;i++)
        {
            cin>>a;
            myset.insert(a);
        }
        count=0;
        for(i=0;i<M;i++)
        {
            cin>>a;
            if(myset.find(a)!=myset.end())
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}


