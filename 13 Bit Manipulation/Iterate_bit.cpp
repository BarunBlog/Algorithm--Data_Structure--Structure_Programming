// Count set bits
// Link https://leetcode.com/problems/number-of-1-bits/discuss/1808928/c-bit-manipulation-3-approaches-on
#include<bits/stdc++.h>

using namespace std;

int main()
{
    uint32_t n = 0011101001;

    int count = 0;
    while(n){
        count += n & 1;
        n >>= 1;

    }

    cout<<count<<endl;

    return 0;
}
