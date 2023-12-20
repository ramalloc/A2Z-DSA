// Search Element in Rotated Sorted Array - I
//--> The elements are unique 
// eg-> arr[] = {7, 8, 9, 1, 2, 3, 4, 5, 6}

/*
-> First Identify the sorted half
*/

/*
int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.

    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] == k) return mid;

        // Checking for the left half 
        else if(arr[low] <= arr[mid]){
// if low value is less than target and also target is less than mid value
            if(arr[low] <= k && k <= arr[mid]){
                // decrease high to search 
                high = mid - 1;
            }
            else{
                // increase the low to search in right half
                low = mid + 1;
            }
        }

        // Checking for right side
        else{
            if(arr[mid] <= k && k <= arr[high]){
                // Increase the low
                low = mid + 1;
            }
            else{
                // decrease the high
                high = mid - 1;
            }
        }
    }

    return -1;
}
*/
// Time Complexity = O(LogN)
// Search Complexity = O(1)