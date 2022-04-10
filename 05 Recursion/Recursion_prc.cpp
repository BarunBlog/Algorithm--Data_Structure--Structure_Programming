
#include<bits/stdc++.h>

using namespace std;

void prc(int x, int y)
{
    cout<<x<<" "<<y<<endl;

    if(x<=0){
        cout<<"x zero"<<endl;
        return;
    }
    if(y<=0){
        cout<<"Y zero"<<endl;
        return;
    }

    prc(x-1, y);
    prc(x, y-1);

}

int main()
{
    int x,y;
    cin>>x>>y;

    prc(x, y);

    return 0;
}
