// Minimum Value/element in Rotated Sorted Array

/*
-> First we have to find the sorted half and elimintate that , if arr[low] < arr[mid] it means left half is sorted and 
    if arr[high] > arr[mid] means right half is sorted
-> Why right half is not sorted ,because of the rotating point is on the right half, all the elements efore rotated point is rotated. 
    The right half is always not sorted 
-> We make a variable which contains INT_MAX -> min = INT_MAX.
-> The sorted half may or may not have the minimum. So we make took the min = arr[low] from sorted half.
-> So the unrotated part which is in right half have the minimum element,
*/

/*
#include <bits/stdc++.h>
int findMin(vector<int>& arr)
{
	// Write your code here.
	int n = arr.size();
	int low = 0;
	int high = n-1;
	int ans = INT_MAX;

	while(low <= high){
		int mid = (low + high)/2;

		if(arr[low] <= arr[mid]){
			ans = min(ans, arr[low]);

			// Eleminating the left half after taking arr[low] 
			low = mid + 1;
		}
		else{
			ans = min(ans, arr[mid]);

			// Eleminating the right half after taking arr[mid] as min 
			high = mid - 1;
		}
	}

	return ans;
}
*/

// OR

/*
#include <bits/stdc++.h>
int findMin(vector<int>& arr)
{
	// Write your code here.
	int n = arr.size();
	int low = 0;
	int high = n-1;
	int ans = INT_MAX;

	while(low <= high){
		int mid = (low + high)/2;

		// Here the condition when we have right and left half both are sorted
		// if arr[low] <= arr[mid] also arr[mid] <= arr[high]
		// So we can say, arr[low] <= arr[high]
		// After this we simply take the low as min and eleminate the sorted half. 
		if(arr[low] <= arr[high]){
			ans = min(ans, arr[low]);
			break;
		}
		if(arr[low] <= arr[mid]){
			ans = min(ans, arr[low]);

			// Eleminating the left half after taking arr[low] 
			low = mid + 1;
		}
		else{
			ans = min(ans, arr[mid]);

			// Eleminating the right half after taking arr[mid] as min 
			high = mid - 1;
		}
	}

	return ans;
}
*/

// Time Complexity = O(logN)