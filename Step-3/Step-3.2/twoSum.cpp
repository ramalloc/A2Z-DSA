// BRUTE
// string read(int n, vector<int> book, int target)
// {   
//     string yes = "YES";
//     string no = "NO";
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(i == j) continue;
//             if((book[i] + book[j]) == target) return yes;
//         }
//     }
//     return no;
// }

//2.
// string read(int n, vector<int> book, int target)
// {   
//     string yes = "YES";
//     string no = "NO";
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){ // we are cheacking from next element because already checked the pair with previous element
//             if(i == j) continue;
//             if((book[i] + book[j]) == target) return yes;
//         }
//     }
//     return no;
// }
//O(n^2)


// BETTER
// We are using hashmap to reduce the time complexity 
// We are storing the elements and index of array whose sum is not equal to k
// We are using required variable to check how much need as compare to target value
 
// #include<bits/stdc++.h>
// string read(int n, vector<int> book, int target) {
//   map<int, int> mpp;
//   string yes = "YES";
//   string no = "NO";
//   for (int i = 0; i < n; i++) {
//     int req = target - book[i];
//     if (mpp.find(req) != mpp.end()) {
//       return yes;
//     }
//     mpp[book[i]] = i;
//   }
//   return no;
// }
//O(n^2) or O(n) depend upon type of map
// O(nlogn) using map only
// SC = (N)

//OPTIMAL 
// Opptimal is slightly efficient than better
// We using two pointer approach
// we are maintaining two pointer in loop, {i} at 0th index {j} at last index 
// we have a required(req) variable which is sum of element at index {i} and {j};
// if req == target then we return yes
// if req is >  target then we decrement the j, and then sum again 
// if req < target then we increment the i, and sum again of values at new {i} and older {j} 

// #include <bits/stdc++.h>
// string read(int n, vector<int> book, int target) {
//     sort(book.begin(), book.end());
//   int i = 0;
//   int j = n - 1;

//   while (i < j) {
//     int req = book[i] + book[j];
//     if (req == target)
//       return "YES";
//     else if (req > target) {
//       j--;
//     } else {
//       i++;
//     }
//   }
//   return "NO";
// }

//O(n) + O(nlogn)
// SC = (1)


