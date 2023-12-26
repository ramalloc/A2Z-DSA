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



// OPTIMAL / BINARY SEARCH
/*
-> We have to assume that if original numbers wre there, so how they were arranged and that will be our missing number at that index 
    which is arr[index] + 1.
-> So we will have to got numbers missing till all the element which is {arr[mid] - [mid+1]};
-> If missing number is less than k then we will set low = mid + 1;
-> Else high = mid - 1;
-> At the end when high crosees low, It can be possible that high points to out of the array.
-> high points somewhere in the array. Now at that high missing number is arr[high] - (high+1).
-> And from the arr[high] we need more to find the kth missing element, So the more is (k - missing).
-> And our missing element is arr[high] + more

Formula
-> ans = arr[high] + k -(arr[high] - (high+1))
=> ans = arr[high] + k -(arr[high] - high - 1))
=> ans = arr[high] + k - arr[high] + high + 1 )   // - arr[high] and + arr[high] cutted off
=> ans = high + k + 1;

-> We can notice that low = high + 1, So we can replace (high + 1) with low and return low + k.
*/
/*
int missingK(vector<int> vec, int n, int k) {
  int low = 0;
  int high = n - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    int missing = vec[mid] - (mid + 1);
    if(missing < k){
        low = mid + 1;
    }
    else{
        high = mid - 1;
    }
  }

  return low + k;
}
*/
// Time Complexity = O(N)
// Space Complexity = O(1)