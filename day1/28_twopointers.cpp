//check if there exists a pair with given sum in an array

#include <bits/stdc++.h>
using namespace std;

bool hasPairWithSum(vector<int> arr, int target) {

    sort(arr.begin(), arr.end());   

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) return true;
        else if (sum < target) left++;
        else right--;
    }
    return false;
}

int main(){

    vector<int> arr = {10, 15, 3, 7};
    cout << "Enter the target sum: ";
    int target;
    cin >> target;   
    
    cout << "Result: ";

    if (hasPairWithSum(arr, target))
        cout << "YES\n";
    else
        cout << "NO\n";
    
}