#include <bits/stdc++.h>
int lineSearch(vector<int> &arr, int target) {
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == target) {
      return i;
    }
  }
}
int costToProcess(int n, vector<int> &arr) {

  int i = lineSearch(arr, 1);
  int cost = 0;
  for (int k = 0; k < n - 1; k++) {
    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;
      if (arr[j] == arr[i] + 1) {
        if (i < j) {
          cost += j - i;
          i = j;
          j = 0;
        } else {
          cost += i - j;
          i = j;
          j = 0;
        }
      }
    }
  }

  return cost;
}
