//Sets in C++

#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int> set1;
    
    set1.insert(3); 
    set1.insert(5); 
    set1.insert(29); 
    set1.insert(3); 

    cout << "Size of the set is: " << set1.size() << '\n';

    cout << "Elements in the set are:\n";
    for(int x: set1) cout << x << ' '; 
    cout << '\n';

    set1.erase(3);

    cout << "Elements in the set after erasing 3:\n";
    for(int x: set1) cout << x << ' '; 
    cout << '\n';

    if(set1.find(5) != set1.end()){
        cout << "5 is present in the set" << '\n'; 
    }
}