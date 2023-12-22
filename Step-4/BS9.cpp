// Find Peak Element
/*
-> the element arr[i-1] < arr[i] > arr[i+1]
-> The element which is greater than there both side elements
-> there can be multiple peak elements in an array
-> If there is no peak element in the array we can assume -infinity before the array and -infinity after the array, So that we can return last 
element of array because ->  -infinity < arr[n-1] > -infinity
-> If there is no peak element in the array we can assume -infinity before the array and -infinity after the array also array is in 
descending order So  we can return the first element of array because ->  -infinity < arr[0] > -infinity
*/


// BRUTE FORCE
// We will iterate the array check for right and left element of present element 
/*
int findPeakElement(vector<int> &arr) {
    // Iterative Method
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if((i == 0 || arr[i-1] < arr[i]) && 
        (i = n-1 || arr[i+1] < arr[i])){
            return arr[i];
        }
    }
    return -1;
}
*/
// Time Complexity = O(N)



// OPTIMAL/BINARY SEARCH
/*
int findPeakElement(vector<int> &arr) {
    // Iterative Method
    int n = arr.size();

    // If array has only one element
    if(n == 0) return 0;

    // If array 0th index element is peak
    if(arr[0] >  arr[1])return 0;
    
    // If array (n-1)th index element is peak
    if (arr[n-1] > arr[n-2]) return n-1;
    
    int low = 1;
    int high = n-2;

    while(low <= high){
        int mid = (low + high)/2;

        // Check arr[mid] is peak element or not
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
           return mid;
        }
        // if arr[mid] is not peak element then check it's linearity
        else if(arr[low] <= arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;
}
*/
// Time Complexity = O(LogN)