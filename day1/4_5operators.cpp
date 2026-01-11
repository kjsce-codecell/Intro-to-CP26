//Bitwise operators

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 20;

    cout << (a & b)  << "\n";  // bitwise AND
    cout << (a | b)  << "\n";  // bitwise OR
    cout << (a ^ b)  << "\n";  // bitwise XOR
    cout << (~a)     << "\n";  // bitwise NOT
    cout << (a << 1) << "\n";  // left shift
    cout << (a >> 1) << "\n";  // right shift
    
    return 0;
}
