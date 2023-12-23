// Smallest Divisor - Find the Smallest Divisor Given a Threshold 
/*
-> We given an array which is consisting some integers and a threshold value.
-> We have to return a number which become divisor and divide each element of array (gives ceil value) and sum of the ceil values 
    should not greater then the given threshold value
-> The range is minimum element of array to maximum element of array 
*/



/*
#include <bits/stdc++.h>
int smallestDivisor(vector<int>& arr, int limit)
{	
	int n = arr.size();
	int maxi = INT_MIN;
	for(int i = 0; i < n; i++){
		maxi = max(arr[i], maxi);
	}

	for(int d = 1; d  < maxi; d++){
		int sum = 0;
		for(int i = 0; i < n; i++){
			sum+= ceil((double)arr[i]/(double)d);
		}
		if(sum <= limit){
			return d;
		}
	}
	return -1;
}
*/

// Time Complexity = O(maxi) * O(N) 




/*
#include <bits/stdc++.h>
bool isPossibleDivisor(vector<int> arr, int n, int limit, int d){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += ceil((double)arr[i]/(double)d);
	}
	if(sum <= limit){
		return true;
	}
	return false;
}
int smallestDivisor(vector<int>& arr, int limit)
{	
	int n = arr.size();
	int maxi = INT_MIN;
	for(int i = 0; i < n; i++){
		maxi = max(arr[i], maxi);
	}

	int low = 1;
	int high = maxi;

	while(low <= high){
		int mid  = (low + high) / 2;

		if(isPossibleDivisor(arr, n, limit, mid)){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return low;
}
*/
// Time Complexity = O(Log(maxi)) * O(N) 