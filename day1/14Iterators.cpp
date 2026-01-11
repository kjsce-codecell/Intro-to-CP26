// Iterators in C++
// Using begin(), end(), rbegin(), rend()

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    // 10 elements

    auto it = v.begin(); 
    
    while (it != v.end()) { 
        cout << *it << " "; 
        it++; 
    }
    
    cout<<"\n";

    auto rit = v.rbegin(); 

    while (rit != v.rend()) { 
        cout << *rit << " "; 
        rit++; 
    }

    return 0;
}
