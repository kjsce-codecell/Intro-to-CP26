// Vectors
// Vectors are similar to arrays but unlike arrays, vectors can grow and shrink as needed. 
// Which means you don’t have to define their size when initializing.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1,2,3,4,5,6}; 
    // Initalizing a vector with all elements defined

    vector<int> v2; 
    // Initializing an empty vector

    vector<int> v3(5); 
    // Initializing a vector of size 5 with all elements being 0

    vector<int> v4(7,4); 
    // Initializing a vector of size 7 with all elements being 4
    
    for (int i = 0; i < v1.size(); ++i) 
    // Looping through the vector using a for loop
    {
        cout << v1[i] << ' '; 
        // Printing the elements of the vector
    }

    v[1] = 0;  // updated the value of vector at index 1 from '2' to '0'
 
}

/* Output: 1
           2
           3
           4
           5         */

// Challenge: Take an input of 8 integers and store them in a vector, 
// iterate through the vector and print all the even integers.
