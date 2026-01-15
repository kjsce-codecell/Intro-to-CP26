#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m; 
    
    cin >> n >> m;     //enter the size of rows and columns
    
    vector<vector<int>> v(n, vector<int>(m, 0));  // vector of size n x m

    cout<<"Enter the elements of the 2D vector:\n";
    
    for(int i = 0; i<n; i++){                       
        for(int j = 0; j<m; j++){
            cin >> v[i][j];                        
        }
    }
    
    cout<<"The 2D vector is:\n";
    
    for(int i = 0; i<n; i++){                       
        for(int j = 0; j<m; j++){
            cout << v[i][j]<<" ";                        
        }
        cout<<"\n";
    }
    
    
    
    return 0;

}

