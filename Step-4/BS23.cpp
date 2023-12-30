// We are starting with Binary Search on 2D arrays.
// Row with maximum number of 1s
/*
-> We have given a 2D Matrix that have 0's and 1's onlyas element in array. Every row in the matrix is sorted
-> We have to return which row contains maximum 1's. In cas ethere are multiple rows of maximum 1's then we return minimum index of maximum
    1's.
*/

// BRUTE FORCE solutions is O(N * M)



// OPTIMAL
/*
-> Here if can't optimize the row (first loop) traversal but we can optimise the second loop which counts 1's.
-> So we low = 0; and high = m, we foind the first 1 and when we fount first 1   the no. of 1's = m - mid; 
*/
/*
#include <bits/stdc++.h>

int lowerBound(vector<int> arr, int n, int k){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] >= k){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int count_max = 0;
    int index = -1;
    for(int i = 0; i < n; i++){
        // we get the count of 1's in matrix[i] row by subtracting the index of 
        // first occurence of 1 from size of matrix[i] which is m 
        int count = m - lowerBound(matrix[i], m, 1);
        if(count > count_max){
            count_max = count;
            // Stored the index where 1's are maximum
            index = i;
        }
    }
    return index;
}
*/
// Time Complexity = O(N * log(M));