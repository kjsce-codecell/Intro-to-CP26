#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int>& arr, int k) {

    int n = arr.size(); 
    auto l = arr.begin();

    // sum of first window
    int window_sum = 0;
    for (auto temp = l; temp != l + k; temp++) {
        window_sum += *temp;
    }
    cout << "Window Sum :" << window_sum << "\n";

    int max_sum = window_sum;

    auto r = l + k;


    while (r != arr.end()) {
        window_sum += *r;   // add new element
        window_sum -= *l;    
        cout << "Window Sum :" << window_sum << "\n";   

        max_sum = max(max_sum, window_sum);

        ++l;        // move window forward
        ++r;  
    }
    
    return max_sum;
}

int main() {

    vector<int> arr = {2, 1, 5, 1, 3, 2};

    cout << "Enter the size of the sliding window: ";
    int k;
    cin >> k;

    int result = maxSum(arr, k);

    cout << "Maximum sum of a sliding window of size " << k << " is: " << result << "\n";

    return 0;
}