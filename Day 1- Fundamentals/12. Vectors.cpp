// Vector in C++
// Demonstrates common vector functions

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;   // declare vector

    vector <int> v2(5); // vector of size 5 

    vector <int> v3(5, 0);


    // push_back() → add elements at end
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // size() → current size
    cout << "Size: " << v.size() << "\n";

    // back() → last element
    cout << "Last element: " << v.back() << "\n";

    // insert() → insert at position
    // insert 15 at index 1
    v.insert(v.begin() + 1, 15);

    // erase() → remove element at position
    // remove element at index 2
    v.erase(v.begin() + 2);

    // pop_back() → remove last element
    v.pop_back();

    // empty() → check if vector is empty
    if (v.empty()) {
        cout << "Vector is empty\n";
    } else {
        cout << "Vector is not empty\n";
    }

    // print vector
    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    // clear() → remove all elements
    v.clear();

    cout << "Size after clear: " << v.size() << "\n";

    return 0;
}
