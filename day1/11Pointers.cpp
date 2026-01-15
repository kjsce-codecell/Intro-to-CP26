
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 10;

    int *pNum = &num; 

    cout << "Address of num: " << pNum << "\n"; 

    cout << "Value at address: " << *pNum << "\n"; 

    return 0;
}
