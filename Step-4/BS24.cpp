// Search in a 2D Matrix - I
/*
-> We have given 2D matrix in sorted manner and a target that we have to find and return true if found the target or return false.
*/

// BRUTE FORCe Taked O(N * M)


// BETTER
/*
-> We are traversing the first loop and in second loop we make a condition where we check that target exists in that row or not
-> If target exists in that row then we will do binary search onece and return true
*/

/*

*/

// Time Coplexity = O(N + Log(M)) 


// OPTIMAL
/*
-> In this solutions we will try to flatten the whole matrix into an array hypothetically and try to apply binary search on that single array. 
-> Then after getting the element we willhave to convert the 1D cordinate into 2D cordinate.
-> In order to get the row of 2D cordinate = index / M and In order to get the column of 2D cordinate = index % M
*/
/*
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();
    int low = 0; 
    int high = (n*m - 1);

    while(low <= high){
        int mid = low + (high - low)/2;
        int row = mid / m;
        int col = mid % m;

        if(mat[row][col] == target){
            return true;
        }
        else if(mat[row][col] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return false;
}
*/