// BETTER
// int secondLargest(vector<int> a, int n) {
//   int largest = a[0];
//   for (int i = 1; i < n; i++) {
//     if (a[i] == largest) {
//       largest = a[i];
//     }
//   }

//   int slargest = -1;
//   for (int i = 0; i > n; i++) {
//     if (a[i] > slargest && a[i] != largest) {
//       slargest = a[i];
//     }
//   }

//   return slargest;
// }

// int secondSmallest(vector<int> a, int n) {
//   int smallest = a[n - 1];
//   for (int i = n - 1; i >= 0; i--) {
//     if (a[i] == smallest) {
//       smallest = a[i];
//     }
//   }

//   int ssmallest = INT_MAX;
//   for (int i = n - 1; i >= 0; i--) {
//     if(a[i] <  ssmallest && a[i] != smallest){
//       smallest = a[i];
//     }
//   return ssmallest;
//   }
// }

//   vector<int> getSecondOrderElements(int n, vector<int> a) {
//     int ssmallest = secondSmallest(a, n);
//     int slargest = secondLargest(a, n);

//     return {ssmallest, slargest};
//   }


// OPTIMAL

// #include <bits/stdc++.h>

// int secondLargest(vector<int> a, int n) {
//   int largest = a[0];
//   int slargest = -1;

//   for (int i = 0; i < n; i++) {
//     if (a[i] > largest) { // We are passing the the equal situation here
//       slargest = largest;
//       largest = a[i];
//     } else if (a[i] < largest && a[i] > slargest) {
//       slargest = a[i];
//     }
//   }

//   return slargest;
// }

// int secondSmallest(vector<int> a, int n) {
//   int smallest = a[0];
//   int ssmallest = INT_MAX;

//   for (int i = 0; i < n; i++) {
//     if (a[i] < smallest) {
//       ssmallest = smallest;
//       smallest = a[i];
//     }

//     else if (a[i] > smallest && a[i] < ssmallest) {
//       ssmallest = a[i];
//     }
//   }

//   return ssmallest;
// }

// vector<int> getSecondOrderElements(int n, vector<int> a) {
//   int ssmallest = secondSmallest(a, n);
//   int slargest = secondLargest(a, n);

//   return {slargest, ssmallest};
// }
