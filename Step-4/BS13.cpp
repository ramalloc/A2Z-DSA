// Rose Garden - Minimum days to make M bouquets
/*
-> We have given an array named bloomed day. Every Index's flower blooms(khilega) on that day(element at that index).
-> We have given the number adjacent (continous/sequencial) of flowers (k) to make a bouquet and number of bouqets required (m).
-> On the end day (maximum element of the array) all the flowers are bloomed.
-> If the number of bouqets * number of flowers given (m * k) are more than number of flowers in array then return -1. 
-> We have to return one of the day from the array, At that day sufficient number flowers bloomed So that given no. of bouqets can be formed.
*/


// BRUTE
/*

bool isPossibleBouqets(vector<int> arr, int bloomDay, int k, int m) {
  // k is the no. of flowers required to make a bouqet
  int n = arr.size();
  int count = 0;
  int noOfBouqets = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] <= bloomDay) {
      count++;
    } else {
      noOfBouqets += (count / k);
      count = 0;
    }
  }
  // At the end of the loop itis neccessary to add noOfBouqets final time
  //	noOfBouqets += (count/k); because the loop has been ended we didn't countered,
  // any day which is greater than bloomDay So we have to count the last bouqet
  noOfBouqets += (count / k);

  if(noOfBouqets >= m) return true;

  return false;
}

int roseGarden(vector<int> arr, int k, int m) {
	if(m * k > n) return -1;
    for(int i = min; i < max; i++){
        if(isPossibleBouqets(arr, i, k, m)){
            return i
        }
    }
    return -1;
}
*/

// Time Complexity = O(max - min+1) * O(N)




// OPTIMAL / BINARY SEARCH ON ANSWER

/*
#include <bits/stdc++.h>
bool isPossibleBouqets(vector<int> arr, int bloomDay, int k, int m) {
  // k is the no. of flowers required to make a bouqet
  int n = arr.size();
  int count = 0;
  int noOfBouqets = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] <= bloomDay) {
      count++;
    } else {
      noOfBouqets += (count / k);
      count = 0;
    }
  }
  // At the end of the loop itis neccessary to add noOfBouqets final time
  //	noOfBouqets += (count/k); because the loop has been ended we didn't
  // countered,
  // any day which is greater than bloomDay So we have to count the last bouqet
  noOfBouqets += (count / k);

  if (noOfBouqets >= m)
    return true;

  return false;
}

int roseGarden(vector<int> arr, int k, int m) {
  int n = arr.size();

//	Below We are multiplying big intergers
// 	so first we need to convert them in long long then multiply
long long val = m * 1LL * k * 1LL;
  if (val > n)
    return -1;

	// Getting mini and maxi
	int mini = INT_MAX;
	int maxi = INT_MIN;
	for(int i = 0; i < n; i++){
		maxi = max(arr[i], maxi);
		mini = min(arr[i], mini);
	}
  int low = mini;
  int high = maxi;

  while (low <= high) {
    int mid = (low + high) / 2;

    if(isPossibleBouqets(arr, mid, k, m)){
		high = mid - 1;
	}
	else{
		low = mid + 1;
	}
  }

  return low;
}
*/

// Time Complexity = O(N) * O(log(max - min + 1))