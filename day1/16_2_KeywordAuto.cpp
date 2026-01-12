// Using auto keyword

#include <bits/stdc++.h>
using namespace std;

int main(){
    auto a = 42;          
    // Compiler deduces int

    auto b = 3.14;       
    // Compiler deduces double

    auto c = "Hello";       
    // Compiler deduces const char

    cout << "Number: " << a << "\n";
    cout << "Decimal: " << b << "\n";
    cout << "Text: " << c << "\n";
    
    return 0;
}
