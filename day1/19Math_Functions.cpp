// Math Functions in C++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 7, b = 2;
    cout << ceil(a / (float)b) << "\n"; //type conversion
    cout << floor(a / (float)b) << "\n"; 
    cout << sqrt(a) << "\n"; 
    cout << abs(a - b) << "\n"; 
    cout << pow(a, b) << "\n"; 
    cout << min(a,b) << "\n";
    cout << max(a,b) << "\n";
    return 0;
}

//Challenge: Write a program that prints the cube root of a number.
