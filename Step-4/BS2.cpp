// Lower Bound -> Smallest index such that arr[index] >= x
/* 
example = arr[] = [3, 4, 6, 8, 9, 12, 22];
1. if x = 8;
lower bound  = 3, because 8 >= x
2. x = 10
lower bound  = 5, because 12 >= x

if therse is no answer or lower bound found then we will return sizeof array as last hypothetical index 
*/
/*
int lowerBound(vector<int> arr, int n, int x) {
	int low = 0;
	int high = n-1;

	// If we wouldn't able to find ans in array then we return hypothetical ans
	int ans = n;

	while(low <= high){
		int mid = (low + high) / 2;

		// If found the element at the condition
		if(arr[mid] >= x){
			ans = mid;

			// To check wheather there is more specific lower bound present
			high = mid - 1;
		}
		else{
			// looking in right side for lower bound
			low = mid + 1;
		}
	}

	return ans;
}
*/

// OR

/*
// We can use c++ STL lower_bound
#include <bits/stdc++.h>
int lowerBound(vector<int> arr, int n, int x) {
	int ans = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
	return ans;
}


// Time Complexity = O(LogN)
// Time Complexity = O(1)



// --- Upper Bound --
/*
Smallest index such that arr[index] > x
*/
/* 
example = arr[] = [3, 4, 6, 8, 9, 12, 22];
1. if x = 4;
upper bound  = 2, because 6 > x
2. x = 12
upper bound  = 6, because 22 > x

if therse is no answer or lower bound found then we will return sizeof array as last hypothetical index 
*/
/*
int upperBound(vector<int> &arr, int x, int n){
	int low = 0; 
	int high = n-1; 

	int ans = n;

	while(low <= high){
		int mid = (low + high) / 2;
		if(arr[mid] > x){
			ans = mid;
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}

	return ans;

}
*/

// OR

/*

#include <bits/stdc++.h>
int upperBound(vector<int> &arr, int x, int n) {
  int ans = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
  return ans;
}*/





//  -- Search Insert Position --
// We are returning lower bound here
/*
int searchInsert(vector<int>& arr, int m)
{	
	int n = arr.size();
	int low = 0;
	int high = n-1;
	int ans = n;

	while(low <= high){
		int mid = (low + high)/2;
		if(arr[mid] >= m){
			ans = mid;
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}

	return ans;
}
*/



// -- Floor and Ceil in Sorted Array
/*
Floor -> The larget number in array <= x
Ceil -> The smallest number in the array >= x
*/
/*
#include<bits/stdc++.h>>
int floor(vector<int> arr, int n, int x) {
  int low = 0;
  int high = n - 1;
  int ans = -1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] <= x) {
      ans = arr[mid];
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return ans;
}	

int ceil(vector<int> arr, int n, int x) {
  int low = 0;
  int high = n - 1;
  int ans = -1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] >= x) {
      ans = arr[mid];
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
	int floorAns = floor(arr, n, x);
	int cielAns = ceil(arr, n, x);
	return make_pair(floorAns, cielAns);
}
*/

// Time Complexity = O(N)
// Time Complexity = O(1)

