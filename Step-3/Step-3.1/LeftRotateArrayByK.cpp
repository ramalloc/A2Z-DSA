// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;



/*
BRUTE FORCE 
-> if d = 9 and n = 7 then the numbers to be shift is only (d % n). Because when we shift an array 7 times and size of array is also 7
    then the array formed is same as initially. So is d = 9 and n = 7, then (9 % 7) = 2, So we shift only 2 times which is (d % n). 
*/
// void leftRotate(int arr[], int n, int d) {
//   d = d % n;

// -> Below We kept a temporary array which contains elements till dth of main array.
//   int temp[d];
//   for (int i = 0; i < d; i++) {
//     temp[i] = arr[i];
//   }
/*
    Shifting of remaning elements of main array so the order to shift that arrray is -> We start from the {d} till the {n}.
    And We arrange the elements of array at places in order of {i-d}. 
*/
//   for (int i = d; i < n; i++) {
//     arr[i - d] = arr[i];
//   }

/*
    Now we will put the elements of temp array in main array. if arr size is 7 and d = 3, then we start to put the elements from (n-d) place 
    till n.
    Now we have to index the temp so here we kept (n-d) as contstant and {i} will increment with loop.
*/
//   for (int i = n - d; i < n; i++) {
//     arr[i] = temp[i - (n - d)];
//   }
// }

// Time Complexity -> O(d) + O(n-d) + O(d) => O(n+d)
// Space Complexity -> O(d);


// OPTIMAL
// Take the elements till {d} and reverse it,  reverse(arr, arr + d)  -> Time Complexity O(d)
// take the elements from {d} to {n} and reverse it. reverse(arr + d, arr + n) -> Time Complexity O(n-d)
// Then reverse the whole array we will get the result. reverse(arr, arr + n) -> Time Complexity O(n)

/*
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> rotateArray(vector<int> arr, int d) {
  int n = arr.size();
  d = d % n;
  rotate(arr.begin(), arr.begin() + d, arr.end());
  return arr;
}
*/

// OR

/*
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> rotateArray(vector<int> arr, int d) {
  int n = arr.size();
  d = d % n;
  reverse(arr.begin(),arr.begin()+d);
  reverse(arr.begin()+d,arr.end());
  reverse(arr.begin(),arr.end()); 
  return arr;
}
*/

// Time Complexity -> O(2n) 
// Space Complexity -> O(1);
