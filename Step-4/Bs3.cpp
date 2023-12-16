// First and Last Occurrences in Array
/*
-> We will get the the first occurence by lower bound
-> We will get the the last occurence by upper bound - 1
-> But there are egde cases 1. is that lower_bound pointing to the N or lower_bound pointing to the index in array
    where element doesn't exists. 
*/
/*
#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{

    int first = lower_bound(arr.begin(), arr.end(), k)-arr.begin();
    if(first == n || arr[first] != k) return {-1, -1};
    int last = (upper_bound(arr.begin(), arr.end(), k)-arr.begin())-1;
    return make_pair(first, last);
}
*/
// Time Complexity = O(2*logN)
// Time Complexity = O(1)


// OR
// Without using lower bound and upper bound




// -- Count occurrences in Array --
/*
#include <bits/stdc++.h>
int firstOccurence(vector<int> arr, int n, int x) {
  int low = 0;
  int high = n - 1;
  int first = -1;

  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == x) {
      first = mid;
      high = mid - 1;
    } else if (arr[mid] < x) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return first;
};
int lastOccurence(vector<int> arr, int n, int x) {
  int low = 0;
  int high = n - 1;
  int last = -1;

  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == x) {
      last = mid;
      low = mid + 1;
    } else if (arr[mid] < x) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return last;
}; 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int x)
{

    int first = firstOccurence(arr, n, x);
    if(first == -1) return {-1, -1};
    int last = lastOccurence(arr, n, x);
    return {first, last};
}
int count(vector<int> &arr, int n, int x) {
  pair<int, int> ans = firstAndLastPosition(arr, n, x);
  if(ans.first == -1) return 0;
  return (ans.second - ans.first) + 1;
}
*/