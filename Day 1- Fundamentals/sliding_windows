#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int>& arr, int k){
    int n = arr.size();
   
    int max_sum = 0;
    for (int i = 0; i < k; i++){
        max_sum += arr[i]; // Compute sum of first window of size k
    }

   
    int window_sum = max_sum; 
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];  //remove element of previous window and adding new element to current window.
        max_sum = max(max_sum, window_sum); 
    }

    return max_sum;
}

int main(){
    vector<int> arr = {5, 2, -1, 0, 3};
    int k = 3;
    cout << maxSum(arr, k);
    return 0;
}
