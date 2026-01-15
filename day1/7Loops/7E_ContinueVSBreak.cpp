//Continue and Break


#include <bits/stdc++.h>
using namespace std;
int main() {
    for (int i = 1; i <= 5; i++) { 
        
        if(i==2) continue; // Skip the current iteration if i is 2

        if(i==4) break; // Stop the loop if i is 4

        cout << i << " "; 
       
    }
    return 0;
}
