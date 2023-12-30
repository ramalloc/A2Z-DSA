// Find Peak Element-II 
/*
-> We have given a 2D matrix where none of the adjecent cells can be similar. Matrix is not sorted.
-> Peak Element is that element who is greater than the left part and greater than the right part also.
-> But here we have given a 2D matrix so we will have to check that it should begreater thanits right counter part, left couter part,
    bottum counter par and top counter part as well.
-> We can have multiple peak elements but we have to return first element.
-> If in right, left, bottum or on top we don't have anything can then we can take that as -1;
-> we have to return the cordinate of that element.
*/


// BRUTE 
// Check Iterarively for left, right, bottum and top then return cordinates.
// Time Complexity = O(N * M * 4), 4 for checking elements.


// OPTIMAL
/*
-> We are going to sole by binary search on no. of coulmns.
-> low = 0; high = m-1; So now we havve the mid suppose low = 0, high = 5 then mid = 2; so we now we will search for the highest element in 
    the mid(2nd) column because the highest element have highest possibility to be the peak element.
-> Now after finding highest number we check that maxNumber is peak element or not. If it is then we return the element.
    if the maxNumber is not peak because there is another number in left which is greater than maxNumber so we will eliminate the 
    right half. 
*/
/*
#include <bits/stdc++.h>

int maxElement(vector<vector<int>>arr, int n, int m, int col){
    int maxi = -1;
    int index = -1;
    for(int i = 0; i < n; i++){
        if(arr[i][col] > maxi){
            maxi = arr[i][col];
            index = i;
        }
    }
    return index;
}

vector<int> findPeakGrid(vector<vector<int>> &g){
    // Write your code here. 
    int n = g.size();   
    int m = g[0].size();   

    // Operating on first row and columns 
    int low = 0; 
    int high = m-1;

    while(low <= high){
        int mid = low + (high - low)/2;
        // maxElement will return the maximum element in that column
        // and the max ele could be the peak element
        int row = maxElement(g, n, m, mid);

        // left will be mid - 1 but if left < 0 then we will take it -1  
        int left = mid - 1 >= 0 ? g[row][mid-1] : -1;

        // right will be mid + 1 but if right > m then we will take it -1
        int right = mid - 1 < m ? g[row][mid+1] : -1;

        if(g[row][mid] > left && g[row][mid] > right){
            return {row, mid};
        }
        if(left > g[row][mid]) high = mid - 1;
        else{
            low = mid + 1;
        }
    }
    return {-1, -1};
}
*/
// Time Complexity = O(LogM * N)