// BRUTE FORCE
// int missingNumber(vector<int> &a, int N) {
//   for (int i = 1; i <= N; i++) {
//     int flag = 0;
//     for (int j = 0; j <= N - 1; j++) {
//       if (a[j] == i) {
//         flag = 1;
//         break;
//       }
//     }
//     if (flag == 0) {
//       return i;
//     }
//   }
// }
// Time Complexity - O(N) * O(N)

// BETTER
/* Here We are using hash table
   first we take a hash array with size of (n+1) and marked them with 0 in data at all indexes.
   Then we runs a loop 1 to n, In which we marked 1 at the indexe of given array's element --> hash[a[i]] = 1.
   Then we runs a loop to check in the hash that at which index marked as 0 and return that index;
*/

// int missingNumber(vector<int> &a, int N) {
//   int hash[N + 1] = {0};
//   for (int i = 0; i < N; i++) {
//     hash[a[i]] = 1;
//   }

//   for(int i = 1; i < N; i++){
//       if(hash[i] == 0){
//           return i;
//       }
//   }
// }
//  Time Complexity - O(N) + O(N) -> O(2N)
//  Space Complexity - O(N) , for hash array

// OPTIMAL
// There are two optimal solutions
// 1. SUM

// #include<iostream>
// using namespace std;

// int main(){

// int a[] = {1, 2, 4, 5, 6};
// int N = sizeof(a) / sizeof(a[0]);
// int sum = (N*(N+1))/ 2;
// int s2 = 0;

// for(int i = 0; i < N -1; i++)
// {
//     s2 += a[i];
// }
// cout << "N = " << N << endl;
// cout << "sum = " << sum <<endl;
// cout << "s2 = " << s2 <<endl;
// cout << (sum-s2);
// return 0;
// }
// // Time Complexity - O(N)
// // Space Complexity - O(1)



// 2.XOR => XOR of same numbers returns 0, And XOR of any number with 0 returns the number

// int xor1 = 0;
//     for(int i = 1; i < N; i++){
//         xor1 = xor1^i;
//     }

//     int xor2 = 0;
//     for(int i = 0; i < N-1; i++){
//         xor2 = xor2^a[i];
//     }

//     return (xor1^xor2);
// Time Complexity - O(2N)


// OR

// int xor1 = 0;

// int xor2 = 0;
// for (int i = 0; i < N - 1; i++)
// {
//     xor2 = xor2 ^ a[i];
//     xor1 = xor1 ^ (i + 1);
// }
// xor with N because in upper loop xor1 doesn't happened for
// the last value, It goes to the only N-1
// xor1 = xor1 ^ N;

// return (xor1^xor2);
// Time Complexity - O(N)
// Space Complexity - O(1)
