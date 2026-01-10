// Arrays in C++
// Arrays are used to store multiple values of the same data type in a single variable.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5]; // Declaring an array of size 5

    for (int i = 0; i < 5; i++) {
         cin >> arr[i]; // Taking input for each element of the array
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i]; // Adding each element to the sum
    }

    cout << "Sum: " << sum << "\n"; // Output: Sum: 15

    return 0;
}
