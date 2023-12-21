// Find out how many times array has been rotated for unique number/elements
/*
-> We have to get the minimum first then the index of minimum will be the answer.
-> The index of minimum is the number of times the array has been rotated.
-> To get the index we kept an index variable 
*/

/*
#include <bits/stdc++.h>
int findKRotation(vector<int> &arr){   
    int n = arr.size();
	int low = 0;
	int high = n-1;
	int ans = INT_MAX;
    int index = -1;

	while(low <= high){
		int mid = (low + high)/2;

		if(arr[low] <= arr[high]){
			if(arr[low] < ans){
                ans = arr[low];
                index = low;
            }
			break;
		}
		if(arr[low] <= arr[mid]){
			if(arr[low] < ans){
                ans = arr[low];
                index = low;
            } 
			low = mid + 1;
		}
		else{
			if(arr[mid] < ans){
                ans = arr[mid];
                index = mid;
            }
			high = mid - 1;
		}
	}

	return index;
}
*/


