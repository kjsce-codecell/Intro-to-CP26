// Vector in C++

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;              // declare vector

    vector <int> v1 = {1, 2, 3, 4, 5};             // another way to declare vector

    vector <int> v2(5);         // vector of size 5 

    vector <int> v3(5,0);    // vector of size 5 initialized with 0


    // push_back() → add elements at end
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // size() - current size
    cout << "Size: " << v.size() << "\n";

    // back() - last element
    cout << "Last element: " << v.back() << "\n";

    // insert 15 at index 1
    v.insert(v.begin() + 1, 15);
    cout << "Element at index 1: " << v[1] << "\n";

    // remove element at index 2
    v.erase(v.begin() + 2);
    cout << "Element at index 2 after erase: " << v[2] << "\n";

    // pop_back() - remove last element
    v.pop_back();
    cout << "Last element after pop_back: " << v.back() << "\n";

    // empty() - check if vector is empty
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
