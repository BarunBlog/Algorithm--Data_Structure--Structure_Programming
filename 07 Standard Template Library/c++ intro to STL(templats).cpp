#include<bits/stdc++.h>
using namespace std;
///Function Template
/**template <typename T>
T square(T a)
{
    return a*a;
}
int main()
{
    cout<<square(5)<<endl;
    cout<<square(5.5)<<endl;
}
*/
///class template
template <typename T>
class BoVector{
T arr[1000];
int size;
public:
    BoVector():size(0){} ///constructor BoVector(): for initializing size=0;
    void push(T x){
        arr[size++]=x;
    }
    void print(){
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    BoVector <int> bv;
    bv.push(2);
    bv.push(3);
    bv.push(4);
    bv.push(5);
    bv.print();
    return 0;
}

