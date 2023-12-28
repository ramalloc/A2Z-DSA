// Minimise the Maximum Distance between Gas Stations
/*
-> We have given an array in sorted order which is consisting integers. The integers are the cordinates of N Gas Stations.
-> Also We have given K which is no. of gas Stations, we have to place the k new gas station on the new cordinates in way such that minimum of 
    maximum distance between gas stations.
-> Wecan place the gas staitons after decimal point of any gas station's cordinates. 
-> We will store the new cordinates in long double/double. Answers within 10(pow(-6)) of the actual answer will be accepted to prevent 
    from time limit exceed  
*/
/*
-> To place the k no. of new gas stations in way a such that the maximum distance get minimum.
-> TO reduce the distance b/w two stations we shouldn't place the k new gas staions after or before of those two gas Stations.
-> We need to place the k new stations in between of two gas Stations so that the distance b/w them get reduce.
-> Let ar[] = [1, 7] and we need to put k = 2, new gas stations so then we should put the k's in such way, So we need to put 2 gas stations.
    and there will be 3 consecutive distance between the gas stations. So need to split the distance b/w present gas
    stations (7-1 = 6) in 3 three equal parts which is 6 / 3 = 2; arr[1, 3, 5, 7] the distancce b/w them is 2.
    we will use this intutins to solve problems.
*/
/*
-> In first iteration we check the maximum distance b/w the gas stations, we took1 gas station from k and will try to place that 1 gas station
    b/w those two gas stations in above conditions(the distance b/w gas station should be equal).
-> we can place more than one new gas staions, more than one times b/w two present gas stations.
*/



// BRUTE FORCE
/*
-> We will keep track that how many placed b/w two gas stations
-> We will Iterate from 1 upto k new gas stations 
-> Now we have to keep a track that how many have been placed. For this we took an array (howMany) whose size = free sections b/w the present
    gas stations. Initially there are 0 gas stations(elements) in the array.
-> So we need to figure out where will be the 1st new gas stations will be placed. For this we will figure out the distance between the 
    gas stations, so whatever the maximum distance b/w two existed gas stations we will put the 1st new gas stations there.
    to keep track of naximum distance by maxDist = -1, and also keeps track of that section where the maximum distance occuring by maxInd = -1;
-> Now we will run a loop from 1 to n-1, took the diff = arr[i+1] - arr[i], and also we have to check that if there is one new gas station
    already placed then the distance will be different, so we have to check that how many new gas stations were place b/w those two
    existed gas stations and the length of the sections between them by (sectionLength = diff/howMany[i]+1).
-> if maxDist < sectionLength then maxDist = sectionLength and maxInd = i;
-> Now when we figured out where the maximum lies, we placed that new gas station in howMany array. howMany[maxInd]++;
    howMany tracks that how many new gas stations placed at which section, basically it shows that how many sections in the existed gas
    stations.
->  We we done with all placements we will go to every pre existed gas  stations and check for the section's individual length and take the 
    maximum sectionLength as answer.

*/
/*
#include <bits/stdc++.h>

double minimiseMaxDistance(vector<int> &arr, int k) {
  int n = arr.size();
  // made a vector to keep track of new gas stations placed in the particular
  // section
  // It is the total sections in the arr
  vector<int> howMany(n - 1, 0);
      // -> We will Iterate from 1 upto k new gas stations
      for (int newGas = 1; newGas <= k; newGas++) {
    // It tracks the maximum Distance b/w two stations from the arr
    long double maxDist = -1;
    // It tracks the maximum distance occurs at that index
    int maxInd = -1;

    for (int i = 0; i < n - 1; i++) {
      // Getting difference b/w stations
      long double diff = (arr[i + 1] - arr[i]);
      // if new gas stations already placed b/w stations, we have to get the
      // length of the sections which is b/w those two stations
      long double sectionLength = diff / (long double)(howMany[i] + 1);
      // if maxDist < sectionLength
      if (maxDist < sectionLength) {
        maxDist = sectionLength;
        // Also keep track of that index where the maxDist occurs
        maxInd = i;
      }
    }
    // When we found the maxDist so we have to place new gas stations there
    // It also works if maxDist is in sectionLength
    howMany[maxInd]++;
  }

  // Now Check for the maximum Distance to return as final answer
  long double maxAns = -1;
  for (int i = 0; i < n - 1; i++) {
    long double diff = (arr[i + 1] - arr[i]);
    long double sectionLength = diff / (long double)(howMany[i] + 1);
    maxAns = max(maxAns, sectionLength);
  }
  return maxAns;
}
*/
// It gives Time Limit Exceed 
// Time Complexity = O(K*N) + N, (K * N) is quadratic in Nature therefore it is giving TLE


// We try to optimise the finding maximum mechanism
/*
-> Here we are using Priority Queue, whenver we push elements in PQ and ask for top element it gives maximum element in LogN Time Complexity.
-> We are Storing the length of section and the index of the section in PQ.
-> Now we we check in the PO for max section Length, put new station there and updates the howMany(howMany[i] + 1) also update PQ
    by sectionLength / howMany[i] + 1; (element, i -1)
*/  