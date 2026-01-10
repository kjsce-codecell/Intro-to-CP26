//Given an array and a target sum, check if any pair adds up to the target.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int target = 9;
    int a[] = {2, 4, 7, 1, 5};

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                cout << "yes" << "\n";
                return 0;
            }
        }
    }

    cout << "no" << "\n";
}
