// D. Search in a 2D Matrix
// time limit per test1 second
// memory limit per test256 megabytes
// You are given an integer matrix of size 𝑛×𝑚 and a target integer 𝑥.

// Your task is to determine whether the value 𝑥 is present in the matrix.

// Input
// The first line contains three integers 𝑛, 𝑚, and 𝑥 (1≤𝑛,𝑚≤1000, 0≤𝑥≤105) — the number of rows, columns, and the target value.

// The next 𝑛 lines each contain 𝑚 integers 𝑎𝑖,𝑗 (0≤𝑎𝑖,𝑗≤105), representing the matrix.

// Output
// Print true if 𝑥 exists in the matrix, otherwise print false.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int Arr[n][m];
    int Target;
    cin >> Target;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> Arr[i][j];
        }
    }
    
    int Max =0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(Arr[i][j] == Target){
                Max=1;
                break;
                
            }
        }
    }
    
    if(Max==1){
        cout << "true";
    } else{
        cout << "false";
    }
    
    
    
    
	

}

