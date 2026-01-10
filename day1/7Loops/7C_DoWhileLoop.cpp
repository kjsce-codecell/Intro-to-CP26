//3. DO-WHILE LOOP:

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 6; 
    // Initialize a variable with a value greater than the condition.

    // A do-while loop ensures the block executes at least once, 
    // even if the condition is false from the beginning.
    do {
        cout << "Value of x: " << x << "\n";
        // Print the current value of 'x' to the console.

        x++; 
        // Increment 'x', though the condition will never be met in this case.

    } while (x <= 5); 
    // Check the condition after executing the block.

    return 0;
}

// Output: "Value of x: 6"
// The loop runs once because the check happens at the end, 
// demonstrating how a do-while loop behaves.

