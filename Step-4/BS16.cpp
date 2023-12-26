// Kth Missing Element 
/*
-> We have given an sorted array, we have to return the kth missing number from the array.
-> eg : arr[] = {4, 5, 7, 8, 10}; k = 1,  ans = 1. Because from to 1 to 10, the first missing number from the array is 1.
        1 should be in the starting of the array.
    eg :  arr[] = {4, 5, 7, 8, 10}; k = 5, ans = 9; 9 is the missing number in the array from 1 to 10 
*/



// BRUTE FORCE
/*
-> We will use this approach if the k > arr[i] then we will assume that arr[i] have a place in the counting so our kth missing 
    element is k + 1; 
-> And if  then we will move forward and 
*/
/*
int missingK(vector < int > vec, int n, int k) {
    int ans = k;

    for(int i = 0; i < n; i++){
        if(vec[i] <= ans){
            ans++;
        }
        else{
            break;
        }
    }
    return ans;
}
*/
// Time Complexity = O(N)
// Space Complexity = O(1)



