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

// BETTER
/*
We use here marking or Hashing, Created tow more arrays rowMark = {0}, colMark = {0}
We traverse the matrix, If we found '0' then we marked the row = 1; col = 1;
again we iterate the matrix and where we found rowMark[i] == 1 || colMark[j] == 1, we make matrix[i][j] = 0;
*/

/*
#include <bits/stdc++.h>
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	vector<int> rowMark(n, 0);
	vector<int> colMark(m, 0);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(matrix[i][j] == 0){
				rowMark[i] = 1;
				colMark[j] = 1;
			}
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(rowMark[i] == 1 || colMark[j] == 1){
				matrix[i][j] = 0;
			}
		}
	}

	return matrix;
}
*/

// Time Complexity -> O(2*N*M)
// Space Complexity -> O(N) + O(M)

// OPTIMAL

/*
step 1 -> We marked every element in ith row and j th colum
step 2 -> then check for the elements who marked 0, therefore we check in i-th row and j-th column
			if i-th row or j-th column marked 0, then element will be 0.
step 3 -> Now We check the remaining elements which is - matrix[0][j] {It is dependent on matrix[0][0]}
		   and then matrix[i][0]{It is dependent on col0}
*/

/*
	vector<int> colMark(m, 0); --> matrix[0][_] // This is column
	vector<int> rowMark(n, 0); --> matrix[__][0] // This is row

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(matrix[i][j] == 0){

				// mark i-th row
				matrix[i][0] == 0;
				// mark j-th column
				matrix[0][j] == 0;

				// But there is a collision case beacause of matrix[0][0] is included in both assumed hash.
				// And because of collision the solution can be affected.
				// To prevent from this collision we can make a variable col0 = matrix[0][0];
				// Now the hash {column} starts from the col0 and hash {row} starts from the matrix[0][0] or matrix[i][j]

				So, We will not mark the matrix[0][j] = 0, if j == 0; in the iteration


				// mark i-th row
				matrix[i][0] == 0;
				// mark j-th column
				if(j != 0){
					matrix[0][j] = 0;
				}
				else{
					// j ==0; means matrix[0][0] which is column
					col0 = 0;
				}

				OR

				if(j == 0){
					col0 = 0;
				}
				else{
					matrix[0][j] = 0;
				}

				// matrix[0][j] is dependent on matrix[0][0]
				// matrix[i][0] is dependent on col0

			}
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(rowMark[i] == 1 || colMark[j] == 1){
				matrix[i][j] = 0;
			}
		}
	}

	return matrix;
*/

// REAL CODE
/*
#include <bits/stdc++.h>
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
  int col0 = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] == 0) {
        matrix[i][0] = 0;
        if (j != 0) {
          matrix[0][j] = 0;
        } else {
          col0 = 0;
        }
      }
    }
  }

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      if (matrix[i][j] != 0) {
        if (matrix[i][0] == 0 || matrix[0][j] == 0) {
          matrix[i][j] = 0;
        }
      }
    }
  }

  if (matrix[0][0] == 0) {
    for (int j = 0; j < m; j++) {
      matrix[0][j] = 0;
    }
  }
  if (col0 == 0) {
    for(int i = 0; i < n; i++) {
      matrix[i][0] = 0;
    }
  }

  return matrix;
}
*/

// Time Complexity -> O(2(N*M))
// Space Complexity -> O(1)