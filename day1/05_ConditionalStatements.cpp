// Control Flow

#include <bits/stdc++.h>
using namespace std;  

int main() {
    int a = 10;

    // if
    if(a > 10) {
        cout << "a is more 10" << "\n";      
    }
    
    //if-else
    if (a % 2 == 0) {
        cout << "a is even" << "\n";        
    } else{      
        cout << "a is odd" << "\n";
    }
    

    // if-else-if-else
    if (a > 0) {    
        cout << "a is positive" << "\n";  
    }else if (a < 0) {    
        cout << "a is negative" << "\n";  
    } else {    
        cout << "a is zero" << "\n";
    }

    
    return 0;
}
