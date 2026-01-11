// Pass by reference

#include <bits/stdc++.h>
using namespace std;

void changeValue(int &x) { 
    x = 20; 
    
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int a = 10;
    cout << "Before function: x = " << a << endl;

    changeValue(a);
    // Called the function

    cout << "After function: x = " << a << endl;

    return 0;
}