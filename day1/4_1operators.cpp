//Arithmetic operators
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 20;

    cout << "a + b :"<< (a + b) << "\n";
    cout << "a - b :" << (a - b) << "\n";
    cout << "a * b :" << (a * b) << "\n";
    cout << "a / b :" << (a / (float)b) << "\n"; //type conversion
    cout << "a % b :" << (a % b) << "\n";

    cout << "Initial a = " << a << "\n";
    cout << "a++ :" << (a++) << "\n";
    cout << "Updated a = " << a << "\n";
    cout << "a-- :" << (a--) << "\n";
    cout << "Updated a = " << a << "\n";
    cout << "++a :" << (++a) << "\n";
    cout << "Updated a = " << a << "\n";
    cout << "--a :" << (--a) << "\n";
    cout << "Updated a = " << a << "\n";

    return 0;
}
