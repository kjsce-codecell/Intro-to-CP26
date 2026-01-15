// Control Flow

#include <bits/stdc++.h>
using namespace std;  

int main() {
    int a = 10;

    // if
    if(a == 10) {
        cout << "a is 10" << "\n";      
    }
    
    //if-else
    if (a >= 0) {
        cout << "Positive" << "\n";        
    } else{      
        cout << "Negative" << "\n";
    }
    

    // if-else-if-else
    int b = 10;
    if(b > 10) {    
        cout << "Greater than 10" << "\n";  
    } else if (b < 10) {    
        cout << "Less than 10" << "\n";  
    } else {    
        cout << "Equal to 10" << "\n";
    }

    
    return 0;
}
