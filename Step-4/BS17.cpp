// Here We are going to Start different type of problems 
// where we Implement Binary Search on Answers (min)max or (max)min

// Aggressive Cow
/*
-> We have given an array which consists N Stalls, and we have given each Stalls Cordinates as element in the array and given no. of cows.
-> Task is to place each cow in such a way the minimum distance between two cows is the maximum.
-> Means We should return the Minimum Distance between two cows which should be the Maximum in the Minimum Distances.  
-> The minimum distance can be any of combination of between two stalls in a consecutive order.

-> So we sort the array, now we will place the cows in any order at any place in the given stalls to get the maximum of minimums.
-> We will find the distance between two consecutive Stalls if the any stalls which have minimum distance between each other
    after placing cows then that will be the minimum distance. And also check that the present minimum is greater than the previous
    minimum or not.
-> If the present minimum is lesser then we will check further or if present is greater then that is our maximum of minimum.
*/

/*
-> We will put the first cow at first stall always.
-> So we will start with maintanable_distance = 1, and now we will put the cows in stalls such that the 
    distance bewteen two stalls should not be less than the maintanable_distance. The distance between two stalls should be greater than
    or equal to the maintanable_distance.
-> Now we will increase the maintanable_distance by 1 = 2, and again we will put the cows in stalls such that the 
    distance bewteen two stalls should not be less than the maintanable_distance.
-> And if there any maintanable_distance in which iteration we will not be able to place all the cows then we will stop the iteration. 
    and will not check further and the previous will be the maximum of minimum distance
*/



/*
#include <bits/stdc++.h>

bool isPlaced(vector<int> stalls, int cows, int min_distance, int n) {
  // Initally no. of cow is 1 because we placed the 1 cow at first index.
  int countCows = 1;

  // last cow at stall number 0
  int last = stalls[0];

  // Iterating the N Stalls
  for (int i = 1; i < n; i++) {

    // If distance of the stalls b/w two stalls is > min_distance
    if (stalls[i] - last >= min_distance) {

      if (countCows >= cows) {
        return true;
      }

      // placed one more cow
        countCows++;

      // last becomes present
      last = stalls[i];
    }
  }

  return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
  int n = stalls.size();
  sort(stalls.begin(), stalls.end());

  for (int i = 1; i < stalls[n - 1] - stalls[0]; i++) {
    if (isPlaced(stalls, k, i, n)) {
      continue;
    } else {
      return i - 1;
    }
  }
}
*/

// Time Complexity = O(max - min) * O(N)




// OPTIMAL
/*
#include <bits/stdc++.h>

bool isPlaced(vector<int> stalls, int cows, int min_distance, int n) {
  // Initally no. of cow is 1 because we placed the 1 cow at first index.
  int countCows = 1;

  // last cow at stall number 0
  int last = stalls[0];

  // Iterating the N Stalls
  for (int i = 1; i < n; i++) {

    // If distance of the stalls b/w two stalls is > min_distance
    if (stalls[i] - last >= min_distance) {
      // placed one more cow
      countCows++;

      // last becomes present
      last = stalls[i];
    }
    if (countCows >= cows) {
      return true;
    }
  }

  return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
  int n = stalls.size();
  sort(stalls.begin(), stalls.end());
  int low = 0;
  int high = stalls[n - 1] - stalls[0];

  while (low <= high) {
    // Here mid is the minimum distance in which stalls separated
    int mid = low + (high - low) / 2;
    if (isPlaced(stalls, k, mid, n)) {
      // Looking for maximum of minium distances
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return high;
}
*/

// Time Complexity = O(NlogN) {for sorting} + O(Log(max - min)) * O(N) 
