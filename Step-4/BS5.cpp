// Search Element in Rotated Sorted Array II - Array might have duplicate elements
/*
-> This is the condition where arr[] = {3, 1, 2, 3, 3, 3, 3}. Here arr[low] = arr[mid] = arr[high]
-> In the above condition we put a check when we counter with the above condition we trim the low and high, and continue to search
-> if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            low++;
            high--;
            continue;
        }
*/

/*
bool searchInARotatedSortedArrayII(vector<int>&arr, int k) {
    // Write your code here.
    int n = arr.size();
     int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] == k) return true;

        // if we counter Here arr[low] = arr[mid] = arr[high]
        if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            low++;
            high--;
            continue;
        }

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

    return 0;
}
*/
