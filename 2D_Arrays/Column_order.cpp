// B. Column Order
// time limit per test1 second
// memory limit per test256 megabytes
// You are given a 2D array of size 𝑛×𝑚 containing integers.

// Your task is to print all the elements of the matrix column by column.

// Input
// The first line contains two integers 𝑛 and 𝑚 (1≤𝑛,𝑚≤1000).

// The next 𝑛 lines each contain 𝑚 integers, the elements of the matrix. All elements satisfy 0≤𝑎𝑖,𝑗≤105.

// Output
// Print all elements of the matrix column by column, separated by spaces.




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
    
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            cout << Arr[j][i] << " ";
        }
    }
    
    
    
    
	

}
