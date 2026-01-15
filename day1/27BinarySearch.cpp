#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;                 // number of elements

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];          // input sorted array elements
    }

    int x;
    cin >> x;                 // element to search

    int l = 0;                // left index
    int r = n - 1;            // right index
    bool found = false;       // flag to check if element exists

    // binary search loop
    while (l <= r) {
        // calculate middle index safely (prevents overflow)
        int mid = l + (r - l) / 2;

        // if middle element is the target
        if (a[mid] == x) {
            found = true;     // element found
            break;
        }
        // if target is greater, ignore left half
        else if (a[mid] < x) {
            l = mid + 1;
        }
        // if target is smaller, ignore right half
        else {
            r = mid - 1;
        }
    }

    // output result
    if (found)
        cout << "Found\n";
    else 
        cout << "Not Found\n";

    return 0;
}
