//You’re given coins of values 1, 5, 10
//You need to make a value n using the minimum number of coins.
//Always take the largest coin possible.

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "Enter the value : ";
    int n;
    cin >> n; 

    int coins[] = {10, 5, 1}; //you have unlimited coins of these value
    int cnt = 0; //inital count

    for(int i = 0; i < 3; i++) { // total 3 elements in coins so loop runs for 3 times
        cnt += n / coins[i]; 
        n %= coins[i]; // no of coins you need
    }

    cout << "Minimum number of coins needed: "  << cnt << "\n";
}
