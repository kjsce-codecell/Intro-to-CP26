// 2D Arrays in C++
// 2D arrays are used to store values in rows and columns (matrix form)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][3]; // Declaring a 2D array with 3 rows and 3 columns

    // Taking input for the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;

    // Calculating sum of all elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }

    cout << "Sum: " << sum << "\n"; // Output: Sum of all elements

    return 0;
}
