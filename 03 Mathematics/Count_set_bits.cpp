// C++ program to demonstrate __builtin_popcount()
#include <iostream>
using namespace std;

int main()
{
    cout << __builtin_popcount(8) << endl; // binary 1000. number of 1's: 1
    cout << __builtin_popcount(7); // binary 111. number of 1's: 3

    return 0;
}
