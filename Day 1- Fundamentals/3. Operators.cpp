// Operators in C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 20;

    //Arithmetic
    cout << "a + b :"<< (a + b) << "\n";
    cout << "a - b :" << (a - b) << "\n";
    cout << "a * b :" << (a * b) << "\n";
    cout << "a / b :" << (a / (float)b) << "\n"; //type conversion
    cout << "a % b :" << (a % b) << "\n";

    //Increment or Decrement
    cout << "a++ :" << (a++) << "\n";
    cout << "a-- :" << (a--) << "\n";
    cout << "++a :" << (++a) << "\n";
    cout << "--a :" << (--a) << "\n";

    
    //Relational Operators
    cout << (a == b) << "\n";  // equal to
    cout << (a != b) << "\n";  // not equal to
    cout << (a > b)  << "\n";  // greater than
    cout << (a < b)  << "\n";  // less than
    cout << (a >= b) << "\n";  // greater than or equal to
    cout << (a <= b) << "\n";  // less than or equal to

     // Logical
    cout << (a && b) << "\n";  // logical AND
    cout << (a || b) << "\n";  // logical OR
    cout << (!a)     << "\n";  // logical NOT


    // Assignment Operators
    cout << "a+=2 :" << (a+=2) << "\n";
    cout << "a-=2 :" << (a-=2) << "\n";
    cout << "a*=2 :" << (a*=2) << "\n";
    cout << "a/=2 :" << (a/=2) << "\n";
    cout << "a%=2 :" << (a%=2) << "\n";

    //Bitwise operators
    cout << (a & b)  << "\n";  // bitwise AND
    cout << (a | b)  << "\n";  // bitwise OR
    cout << (a ^ b)  << "\n";  // bitwise XOR
    cout << (~a)     << "\n";  // bitwise NOT
    cout << (a << 1) << "\n";  // left shift
    cout << (a >> 1) << "\n";  // right shift


    return 0;
}
