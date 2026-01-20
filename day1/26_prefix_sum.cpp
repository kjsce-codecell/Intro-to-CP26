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
    cout << "Prefix Sum Array: ";
    for (int x : prefixSum) {
        cout << x << " ";
    }
    cout << "\n";

    
    cout<<"Enter range to find their sum\n";
    int l,r;
    cin >> l >> r;
    
    cout<<"Sum :\n";

    if(l==0){
        cout<<prefixSum[r]<<"\n";
    }
    else{
        cout<<prefixSum[r] - prefixSum[l-1];
    }

    return 0;
}
