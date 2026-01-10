// Iterators in C++
// Using begin(), end(), rbegin(), rend()

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    // 10 elements

    auto it = v.begin(); 
    //v.begin() returns an iterator pointing to the first element of the vector
    
    while (it != v.end()) { 
        //v.end() returns an iterator pointing to one past the last element

        cout << *it << " "; 
        // *it dereferences the iterator and returns the value at that position

        it++; 
        //it++ increments the iterator
    }
    cout<<"\n";

    auto rit = v.rbegin(); 
    //v.rbegin() returns a reverse iterator pointing to the last element of the vector

    while (rit != v.rend()) { 
        //v.rend() returns a reverse iterator pointing to one past the first element

        cout << *rit << " "; 
        // *rit dereferences the reverse iterator and returns the value at that position

        rit++; 
        //rit++ increments the reverse iterator
    }
    return 0;
}

/* Output: 1 2 3 4 5 6 7 8 9 10 
           10 9 8 7 6 5 4 3 2 1       */
