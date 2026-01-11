//Sets in C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> set1;
    
    set1.insert(3); 
    set1.insert(5); 
    set1.insert(29); 
    set1.insert(3); 

    for(int x: set1) cout << x << '\n'; 

    set1.erase(3);

    for(int x: set1) cout << x << '\n';

    for(int i = -5000; i <= 5000; i++) set1.insert(i); 
    //adding a lot of values 

    if(set1.find(5) != set1.end()){
        cout << "5 is present in the set" << '\n'; 
    }
}