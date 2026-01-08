#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9};
    int n = arr.size();

    // Create a prefix sum array of the same size
    vector<int> prefixSum(n);

    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    // Output the result
    for (int x : prefixSum) {
        cout << x << " ";
    }
    // Output: 3 4 8 9 14 23 

    return 0;
}
