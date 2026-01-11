#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int &ref = a;   // ref is a reference to a

    cout << a << "\n";    
    cout << ref << "\n";  

    ref = 20;             

    cout << a << "\n";    
}
