/**#include<iostream>
using namespace std;
template <typename T>
T add(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<add(5,6)<<endl;
    cout<<add(5.5,6.6)<<endl;
    string S="Barun ",S1="Bhattacharjee";
    cout<<add(S,S1)<<endl;
}
*/
#include<iostream>
using namespace std;
template <class T>
T square(T x)
{
    return x*x;
}
int main()
{
    cout<<square(5)<<endl;
    cout<<square(5.5)<<endl;
    return 0;
}
