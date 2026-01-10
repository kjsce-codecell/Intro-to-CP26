#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int &ref = a;   // ref is a reference to a

    cout << a << "\n";    // 10
    cout << ref << "\n";  // 10

    ref = 20;             // changes a

    cout << a << "\n";    // 20
}
