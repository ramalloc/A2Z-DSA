// Rotate matrix or Rotate Image Problem
// problem states that to rotate a matrix in clockwize direction by 90 degree.


// BRUTE
/*
#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	int n = mat.size();
	vector<vector<int>> ans[n][n];	

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			ans[j][(n-1)-i] = mat[i][j];
		}
	}
}
*/

// Time Complexity -> O(N*N)
// Space Complexity -> O(N*N)


// BETTER
/*
1. We are Transposing (column becomes row and row becomes column) the Matrix .
    -> In order to transpose, we observe that the diagonal values remains same in the matrix.
    -> So we perform operations on other elements.
    -> mat[i][j] in transpose is equals to transposeMat[j][i]
    -> If the i = 0; the loop starts from i+1 to the n-1;
    -> Last element of matrix is at index of n-2

2. And then we are reversing the every row
*/

/*
#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	int n = mat.size();	

	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			swap(mat[i][j], mat[j][i]);
		}
	}

	for(int i = 0; i < n; i++){
		reverse(mat[i].begin(), mat[i].end());
	}
}
*/

// Time Complexity -> O((N/2) * (N/2)) + O(N * (N/2)) 
// Space Complexity -> O(1) 