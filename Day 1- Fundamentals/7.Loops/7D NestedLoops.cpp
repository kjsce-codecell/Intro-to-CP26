//Nested Loops

#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) {   // outer for loop
        int j = 1;
        while (j <= 3) {             // inner while loop
            cout << i << " " << j << "\n";
            j++;
        }
    }
    return 0;
}

//output

/*

1 1
1 2
1 3
2 1
2 2
2 3
3 1
3 2
3 3

*/
