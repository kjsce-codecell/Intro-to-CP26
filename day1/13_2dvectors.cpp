#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m; 
    
    cin >> n >> m; //enter the size of rows and columns
    
    vector<vector<int>> v(n, vector<int>(m, 0)); // declare the vector of size n x m
    
    for(int i = 0; i<n; i++){ //take input in 2d vector
        for(int j = 0; j<m; j++){
            cin >> v[i][j]; // input the value of i th row and j th column
        }
    }
    
    
    for(int i = 0; i<n; i++){ //print the whole 2d vector
        for(int j = 0; j<m; j++){
            cout << v[i][j]; //output the value of i th row and j th column
        }
    }
    
    
    
    return 0;

}

