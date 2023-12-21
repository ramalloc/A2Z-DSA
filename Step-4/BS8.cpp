// Single Element in Sorted Array
/*
-> We have given Sorted Array in which All elements appearing twice except one element and we have to return that single appeared element.
    eg. arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6}
    we have to return 4
*/

/*
-> If we are standing at an index then it is possible that the index+1 will be same element as index
    or index-1 will be the same element as index.
-> And if the element at index-1 and index+1 is not same as the element at index, then that will be our answer.
*/

// BRUTE FORCE -> using O(n)
/*
int singleNonDuplicate(vector<int> &arr) {
  // Write your code here
  int n = arr.size();
  if (n == 1)
    return arr[0];

  for (int i = 0; i < n; i++) {
    //   To avoid the overflow condition, also for edge cases
    if (i == 0) {
      if (arr[0] != arr[i + 1])
        return arr[0];
    }
    //   To avoid the overflow condition
    else if (i == n-1){
        if(arr[n-1] != arr[i-1]) return arr[n-1];
    }
    else{
        if(arr[i-1] != arr[i] && arr[i+1] != arr[i]) return arr[i];
    }
  }

}
*/



// OPTIMAL
/*
-> By the observation we saw that (1, 1) (2, 2) (3, 3) which is in left half of single element, the first element is at even index
    and second element is at odd index.
-> And (5, 5) (6, 6) which is in right of single element, the first element is at odd index and second element is at even index.
-> So if (even, odd) element combination occurs which is left half, then it means our single element is in right half.
-> So if (odd, even) element combination occurs which is right half, then it means our single element is in left half.
*/

/*
int singleNonDuplicate(vector<int> &arr) {
  int n = arr.size();
  if (n == 1)
    return arr[0];

  // Dealing with edge case when element is at index = 0;
  if (arr[0] != arr[1])
    return arr[0];

  // Dealing with edge case when element is at index = n-1;
  if (arr[n - 1] != arr[n - 2])
    return arr[n - 1];

/*
  -> Now we start with binary check, we will set the low = 1 and high = n-2
          to get rid of extra checks.
*/
int low = 1;
int high = n - 2;

while (low <= high)
{
    int mid = (low + high) / 2;

    // If arr[mid] is single element the we will return
    if (arr[mid - 1] != arr[mid] && arr[mid + 1] != arr[mid])
        return arr[mid];

    // Now we will implement the logic of (odd, even) or (even, odd) indexes.
    // Eleliminating the half where element is not present

    // -- Left Half Check --
    /*
    -> If index/mid is odd and previous index(mid-1) element is same as odd
        means it's	left half and the element is in right half, So
    elemintate this half.
    -> OR if index is even here we also check for right index. If index/mid
                even then we check right for odd and equals to arr[mid].
                arr[mid+1] == arr[mid];
    */

    if ((mid % 2) == 1 && arr[mid - 1] == arr[mid] ||
        (mid % 2) == 0 && arr[mid + 1] == arr[mid])
    {
        low = mid + 1;
    }
    else
    {
        // Eliminating right half
        high = mid - 1;
    }
}

return -1;
}
*/

// Time Complexity = O(logN)
// Time Complexity = O(1)

