// E. Row Minimum
// time limit per test1 second
// memory limit per test256 megabytes
// You are given an integer matrix of size 𝑛×𝑚.

// Your task is to compute the minimum element of each row.

// Input
// The first line contains two integers 𝑛 and 𝑚 (1≤𝑛,𝑚≤1000). The next 𝑛 lines each contain 𝑚 integers 𝑎𝑖,𝑗 (0≤𝑎𝑖,𝑗≤105), representing the matrix.

// Output
// Print 𝑛 integers separated by spaces, the minimum element of each row in order.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int Arr[n][m];
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> Arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        int constant_bc=Arr[i][0];
        for(int j=0;j<m;j++){
            if(Arr[i][j] < constant_bc){
                constant_bc=Arr[i][j];
            }
            
            
        } cout << constant_bc << " ";
    }
    
    
    
    
	

}
