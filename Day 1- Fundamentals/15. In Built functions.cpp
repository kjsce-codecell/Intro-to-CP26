#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 1, 4, 2, 3, 2};

    cout << "Initial vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    // sort ascending
    sort(v.begin(), v.end());
    cout << "After sort ascending: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    // sort descending
    sort(v.rbegin(), v.rend());
    cout << "After sort descending: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    // reverse vector
    reverse(v.begin(), v.end());
    cout << "After reverse: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    // max element
    cout << "Max element: "
         << *max_element(v.begin(), v.end()) << "\n";

    // min element
    cout << "Min element: "
         << *min_element(v.begin(), v.end()) << "\n";

    // binary search requires sorted vector
    sort(v.begin(), v.end());
    cout << "After re-sorting for binary search: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    cout << "Binary search for 3: "
         << binary_search(v.begin(), v.end(), 3) << "\n";

    // lower bound
    auto lb = lower_bound(v.begin(), v.end(), 3);
    cout << "Lower bound of 3: " << *lb << "\n";

    // upper bound
    auto ub = upper_bound(v.begin(), v.end(), 3);
    cout << "Upper bound of 3: " << *ub << "\n";

    // count frequency
    cout << "Count of 2: "
         << count(v.begin(), v.end(), 2) << "\n";

    return 0;
}


/*
Initial vector: 5 1 4 2 3 2
After sort ascending: 1 2 2 3 4 5
After sort descending: 5 4 3 2 2 1
After reverse: 1 2 2 3 4 5
Max element: 5
Min element: 1
After re-sorting for binary search: 1 2 2 3 4 5
Binary search for 3: 1
Lower bound of 3: 3
Upper bound of 3: 4
Count of 2: 2

*/