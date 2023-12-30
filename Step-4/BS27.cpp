// Median in a Row Wise Sorted Matrix
/*
-> We have given 2D matrix which has odd no. of itegers means : (odd)n * (odd)m = Odd. Every in this 2D matrix is sorted
-> If we suppose a hypothetical array of the above 2D matrix in sorted manner, So we have to return the median fom the hypothetical array.
*/

// BRUTE
/*
-> Store the 2D matrix in a different arrray in sorted manner, then return median(m*n/2).
*/
// Time Complexity = O(N*M + N*M *Log(N*M));



// OPTIMAL
/*
-> Low will be the lowest in 1st col and high will be highest in last col.
-> we started with mid, Now we calculate that how many are <= in that matrix by countLessEq().
-> If we have mid then we can't surely say that everything in left is lesser than mid or we can't surely say that everything in
    right is greater than mid, there can be equals of mid in left or right.
-> So we will pass the mid to countLessEql(), And func gives us the no. of elements which are lesser and equal to mid.
-> If countLessEql <= req then we will increment the low, low = mid + 1; else high = mid - 1; req = (n*m)/2; low always points answer. 

-> countLessEql() takes matrix, mid. It checks first row for the upper_bound of mid returns the index of that first number which is greater
    than mid. Then it goes to second row and till last.
-> Applyig Binary Search on rows to find upper bound.
-> In the end the sum of index is the total number which are lesser and equal to mid.
*/

/*
#include <bits/stdc++.h>
int upperBound(vector<int> arr, int x, int n){
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] > x){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int countLessEql(vector<vector<int>> mat, int n, int m, int num) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += upperBound(mat[i], num, m);
  }
  return sum;
}

int median(vector<vector<int>> &matrix, int m, int n) {
  // Write your code here.
  n = matrix.size();
  m = matrix[0].size();
  int low = INT_MAX;
  int high = INT_MIN;
  for (int i = 0; i < n; i++) {
    low = min(low, matrix[i][0]);
    high = max(high, matrix[i][m - 1]);
  }

  int req = (n * m) / 2;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    int smallerEql = countLessEql(matrix, n, m, mid);
    if (smallerEql <= req) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return low;
}
*/

// Time Complexity = O((Log 10^9) * (N * LogM))