// Question = Mark the rows and Columns equals to Zero which contains 0 Element in 0,1 Matrix

// BRUTE
/*
1. We Iterate the matrix and search for the 0.
2. If we found Zero We Marked the columns and rows equals to -1, to prevent from the making another 0s and processing further
3. Now Iterate Once more and marked the elements = 0, where elements = -1.
*/

/*
#include <bits/stdc++.h> 
class Solution {
public:
void markRow(vector<vector<int>>&matrix, int i, int m){
	for(int j = 0; j < m; j++){
		if(matrix[i][j] != 0){
			matrix[i][j] = -1;
		}
	}
}

void markColumn(vector<vector<int>>&matrix, int j, int n){
	for(int i = 0; i < n; i++){
		if(matrix[i][j] != 0){
			matrix[i][j] = -1;
		}
	}
}
    void setZeroes(vector<vector<int>>& matrix) {
        int n = sizeof(matrix)/sizeof(matrix)[0];
        int m = sizeof(matrix[0])/sizeof(matrix)[0][0];
        for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(matrix[i][j] == 0){
				markRow(matrix, i, m);
				markColumn(matrix, j, n);
			}
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(matrix[i][j] == -1){
				matrix[i][j] = 0;
			}
		}
	}
    }
};
*/

// Time Complexity -> O(N*M) + O(N+M) + O(N*M)