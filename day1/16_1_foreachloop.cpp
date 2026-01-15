//FOREACH LOOP:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5}; // Initialize an array

    cout<<"Elements of the array are:\n";

    for (int i: arr)     
    {
        cout << i << ' ';   
    }
    return 0;
}
