// Search in a 2D Matrix - II 
/*
-> Here we jave to return the cordinate of the target where its lying.
-> In this 2D matrix every row is sorted but if we take hypothetical 1D of this array that will not be sorted.
->  
*/


// BRUTE O(N * M)

// BETTER
/*
-> If we apply binary search on second loop then time complexity = O(N * Log(M))
*/


// OPIMAL
/*
-> By Observing we saw that where we are standing we can see that the row is sorted before that element and column is also sorted with respect
    to that element.
-> We using the approach where we are comparing and eliminating the row and columns.
-> We will start the iteration in first array from reverse, row = 0, col = m. 
-> if target < arr[row][col]  then we will eliminate the column by doing col--; So row = 0; col = m-1;
-> if target > arr[row][col] then we will eliminate the row by increasing the row by doing row++; So row = 1; col = m-1;
-> At the end we will have the element were the element == target and we will return {row, col}
-> We are taking N + M Steps to go from up to low So O(N + M)
*/
/*
bool searchElement(vector<vector<int>> &mat, int target) {
    // Write your code here.
    int n = mat.size();
    int m = mat[0].size();
    int row = 0; 
    int col = m-1;
    while(row < n && col >= 0){
        if(target == mat[row][col]){
            return true;
        }
        else if(target < mat[row][col]){
            col--;
        }
        else{
            row++;
        }
    }
    return false;
}
*/

// Time Complexity = O(N + M);