// Find the Nth root of an Integer
/*
-> Nth root means -> Nth√integer.
-> We will multiply the n nth times until we will get the number which is equals to m(integer). eg. n = 3, m = 27, 3√27 = 3
-> If nth root doesn't exists then return -1.
*/


// OPIMAL
/*
#include <bits/stdc++.h>
// Here we can get overflow problem therefore we should n't check the mid^n
// We should just multiply the mid nth times and if mid crosses m after 
// multiplication then it means there is no nth root present

// if ans == m return 1
// if ans < m return 0
// if ans > m return 2
int midPowerN(int mid, int n, int m){
  long long ans = 1;
  for(int i = 1; i <= n; i++){
    ans = ans * mid;

    // Whenever ans becomes greater than m return 2
    if(ans > m) return 2;
  }
  if(ans == m) return 1;

  return 0;
}
int NthRoot(int n, int m) {
  int low = 1;
  int high = m;

  while (low <= high) {
    int mid = (low + high) / 2;

    int midN = midPowerN(mid, n, m);

    if (midN == 1)
      return mid;

    else if (midN == 2) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return -1;
}
*/

// Time Complexity = O(logM) * O(logN)

