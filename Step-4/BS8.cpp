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

