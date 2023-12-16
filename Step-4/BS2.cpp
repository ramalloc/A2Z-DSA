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


