#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 1, 4, 2, 3, 2};
    int i;

    cout << "Initial vector: ";
    for ( i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    // sort ascending
    sort(v.begin(), v.end());
    cout << "After sort ascending: ";
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    // sort descending
    sort(v.rbegin(), v.rend());
    cout << "After sort descending: ";
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    // reverse vector
    reverse(v.begin(), v.end());
    cout << "After reverse: ";
    for (i = 0; i < v.size(); i++) {
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
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    cout << "Binary search for 3: "
         << binary_search(v.begin(), v.end(), 3) << "\n";

    // lower bound
    int lb = *lower_bound(v.begin(), v.end(), 3);
    cout << "Lower bound of 3: " << lb << "\n";

    // upper bound
    int ub = *upper_bound(v.begin(), v.end(), 3);
    cout << "Upper bound of 3: " << ub << "\n";

    // count frequency
    cout << "Count of 2: "
         << count(v.begin(), v.end(), 2) << "\n";

    return 0;
}


