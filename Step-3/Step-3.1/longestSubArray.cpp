// BRUTE

// int longestSubarrayWithSumK(vector<int> a, long long k) {
//   int len = 0;
//   int n = a.size();
//   for (int i = 0; i <n ; i++) {
//     for (int j = i; j < n; j++) {
//       long long s = 0;
//       for (int K = i; K <= j; K++) {
//         s += a[K];
//       }
//       if (s == k) {
//         len = max(len, j - i + 1);
//       }
//     }
//   }
//     return len;
// } 
// O(n^3)

// BETTER
// int longestSubarrayWithSumK(vector<int> a, long long k) {
//   int len = 0;
//   int n = a.size();
//   for (int i = 0; i < n; i++) {
//     long long s = 0;
//     for (int j = i; j < n; j++) {
//       s += a[j];
//       if (s == k) {
//         len = max(len, j - i + 1);
//       }
//     }
//   }
//   return len;
// }
// O(n^2)

// OPTIMAL solution is hashing
//1.Positive
// int longestSubarrayWithSumK(vector<int> a, long long k) {
//   map<long long, int> preSumMap; // Map is a key-value data structure
//   // to access value at any key -> map_name[key_name]
//   // -->This gives value at that key witten in square brackets
//   long long sum = 0;
//   int maxLen = 0;

//   for(int i = 0; i < a.size(); i++){
//     sum += a[i];
//     if(sum == k){
//       maxLen = max(maxLen, i + 1);
//     }

//     long long remaining = sum - k; // It gives the remaining number subtracting k from sum.
//     if(preSumMap.find(rem) != preSumMap.end()){ // The if() condition used here for search the remaining number already exists in Map or not
//                                                  And also checks that the remaining number should not be the last key of the Map
//       int len = i - preSumMap[rem]; // It gives the length of longest subarray whose sum is K
//                                       By subtracting the value(index) of the correspondent key from the current/ i(th) index of array;
//       maxLen = max(maxLen, len); 
//     }
//     preSumMap[sum] = i; // It stores the sum at i(th) index 
//   }
//   return len;
// }

//2.+ve/-ve
// int longestSubarrayWithSumK(vector<int> a, long long k) {
//   map<long long, int> preSumMap; // Map is a key-value data structure
//   // to access value at any key -> map_name[key_name]
//   // -->This gives value at that key witten in square brackets
//   long long sum = 0;
//   int maxLen = 0;

//   for(int i = 0; i < a.size(); i++){
//     sum += a[i];
//     if(sum == k){
//       maxLen = max(maxLen, i + 1);
//     }

//     long long remaining = sum - k;
//     if(preSumMap.find(rem) != preSumMap.end()){ // The 
//       int len = i - preSumMap[rem];
//       maxLen = max(maxLen, len);
//     }
//     if(preSumMao)
//     preSumMap[sum] = i; // It stores the sum at i(th) index 
//   }
//   return len;
// }

