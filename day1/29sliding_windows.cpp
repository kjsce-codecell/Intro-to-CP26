#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int>& arr, int k) {
    
    int n = arr.size();


    // Sum of first window
    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
        cout<<"sum of window "<<i<<": "<<window_sum<<"\n";
    }

    int max_sum = window_sum;

    // Slide the window
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];  // add next, remove previous
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main() {
               
    vector<int> arr = {2, 1, 5, 1, 3, 2};

    cout << "Enter the size of the sliding window: ";
    int k;
    cin >> k;    //size of window             

    int result = maxSum(arr, k);
  
    cout << "Maximum sum of a sliding window of size " << k << " is: " << result << "\n";

    return 0;
}
