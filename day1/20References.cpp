#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int &ref = a;   // ref is a reference to a

    cout << "Value of a: "<< a << "\n";    
    cout << "Value of ref: " << ref << "\n";  

    ref = 20;             

    cout << "Value of a after modifying ref: " << a << "\n";    
}
