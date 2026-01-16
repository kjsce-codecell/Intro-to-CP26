// Arrays in C++

#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[5]; 

    // int arr[] = { 1 , 4 , 5 , 6 , 8 };       (initialise array)

    cout << "Enter 5 elements of the array:\n";
    for (int i = 0; i < 5; i++) {
         cin >> arr[i];                         // Taking input for each element of the array
    }

    cout << "Element at index 2: " << arr[2] << "\n";

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    cout << "Sum: " << sum << "\n";             // Output: Sum of all elements

    return 0;
}
