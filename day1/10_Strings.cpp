#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "KJSSE";
    
    int l = s.length();         //function to calculate the length of the string
    cout << "The length of the string is: " << l << endl;

    char ch = s[2]; 
    cout << "Character at index 2 is: " << ch << endl;
    
    s = "H3LLo";                //re-initialize the string S
    
    bool IsEmpty = s.empty();  
    cout<<IsEmpty<<endl; 
    
    s.push_back('?');           //adds a ? to the end
    cout << s << endl;
    
    s.pop_back();               //removes the last character.
    cout << s << endl;
    
    //Join two string together
    string s1 = "My CP skills are ";
    string s2 = "amazing!";
    cout << (s1 + s2) <<endl;
    
    string newstring = "Codecell";
    cout << newstring.substr(0, 4) << endl;
   
    cout << newstring.find("cell") << endl;
    cout << newstring.find("Cell") << endl; //returns string npos if not found
    
    
    return 0;
}
