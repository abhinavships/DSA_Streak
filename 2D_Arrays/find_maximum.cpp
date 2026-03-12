// C. Find Maximum
// time limit per test1 second
// memory limit per test256 megabytes
// You are given an integer matrix of size 𝑛×𝑚.

// Your task is to find the maximum element in the entire matrix.

// Input
// The first line contains two integers 𝑛 and 𝑚 (1≤𝑛,𝑚≤1000). The next 𝑛 lines each contain 𝑚 integers 𝑎𝑖,𝑗 (0≤𝑎𝑖,𝑗≤105), representing the matrix.

// Output
// Print a single integer, the maximum element in the matrix.

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
    
    int Max = Arr[0][0];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(Arr[i][j] > Max){
                Max=Arr[i][j];
            }
        }
    }
    
    
    cout << Max;
    
    
    
	

}
