// Median of two Sorted Arrays of Different Sizes
/*
-> We have given two arrays of different sizes and We have to find median of the arrays. Median means on the left of median and 
    rigth of median the no. of elements shoould be equal.
-> We take both arrays and combined them in sorted order. 
-> Now if the no. elements in combined array is even then we need to find two median elements and add them and divide them by 2,
  median = mid + (mid+1) / 2;
-> If the no. elements in combined array is Odd then we can simply return mid 
*/


/*
double median(vector<int> &a, vector<int> &b) {
  int n = a.size();
  int m = b.size();

//   We will merge the arrays in sorted order. 
  vector<int> comArray;
  int i = 0;
  int j = 0;

  while (i < n && j < m) {
    if (a[i] < b[j])
      comArray.push_back(a[i++]);
    else {
      comArray.push_back(b[j++]);
    }
  }
  while (i < n) {
    comArray.push_back(a[i++]);
  }
  while (j < m) {
    comArray.push_back(b[j++]);
  }

//   We know the size of new Array (newN = n + m);
int newN = n + m; 
// if n == odd then we return (n/2)
if (newN % 2 == 1){
	return comArray[n/2];
}
	return (double)((double)(comArray[n/2]) + (double)(comArray[n/2 - 1])) / 2.0; 
}
*/




// BETTER
/*
-> We need to optimize by avoiding the extra space.
-> So we took index1 and el1 = n/2 - 1, index2 and el2 = n/2
-> So we took a variable count = 0; and iterate the both array simultaneously and compares both elment of that index 
-> If any of them is lesser than others then we will increment count and stores the element
-> If count encounters with index1 or index1 then we save the elements of that
*/

/*
double median(vector<int> &a, vector<int> &b) {
  int n1 = a.size();
  int n2 = b.size();
  int i = 0;
  int j = 0;
  int n = (n1 + n2);
  int ind2 = n / 2;
  int ind1 = ind2 - 1;
  int count = 0;
  int ind1Ele = -1;
  int ind2Ele = -1;
  while (i < n1 && j < n2) {
    if (a[i] < b[j]) {
      if (count == ind1)
        ind1Ele = a[i];
      if (count == ind2)
        ind2Ele = b[j];
      count++;
      i++;
    } else {
      if (count == ind1)
        ind1Ele = a[i];
      if (count == ind2)
        ind2Ele = b[j];
      count++;
      j++;
    }
  }
  while (i < n1) {
    if (count == ind1)
      ind1Ele = a[i];
    if (count == ind2)
      ind2Ele = b[j];
    count++;
    i++;
  }
  while (j < n2) {
    if (count == ind1)
      ind1Ele = a[i];
    if (count == ind2)
      ind2Ele = b[j];
    count++;
    j++;
  }
  if(n % 2 == 1){
    return double(ind2Ele);
  }

  return (double)((double)(ind1Ele + ind2Ele)) / 2.0;
}
*/






// OPTIMAL
/*
-> We draw a line where our median is present in hypothetical combined array. And We try to formulate correct left and right half.
-> So in Even N, median will be (m - 1) + (m + 1)/2.
-> In even case we partition the hypothetical arra in two halfs, left = 0 -- n/2, right = (n/2 + 1) -- n
-> We will try to build left half and right half. We calculate that how much we need in left and right half. left = 5, right = 5
-> So first we took 0 elements from arr1 and took all elements from arr2. if arr1.size() < 5 then we will pick 1 element from arr1 and
  the remaining in arr1 we will take in right.  
-> now sort the left half and right half if last element of left is < first element of right then it is sorted and we can find our mediun,
  but if not then we will took 1 more from arr1 means 2 elements from arr1 and (5-2 = 3) 3 elements from arr2 and we place remaining
  elements in right half 
-> Again sort both halfs and we check that last element of left is < first element of right or not. if it is true then we search for 
  median else we again add more elements from arr1 and less elements from arr2 in left half and rest in right half.
-> How to check left and half is in sorted manner with respect to each other. So for this we took l1 =  max / last element from left half
    or last element choosed from arr1 for left half and r1 as first element from arr1 for the right half.
-> Take l2 as last element choosed from arr2 for left half and r2 as smallest element in right half and first element from arr2 for the 
    right half.
-> So to form sorted symmetry in both sides we need to check that (l1 < r2) and (l2 < r1)
-> Now we will find the median = (max(l1, l2) + min(r1, r2)) / 2  

*/


/*
-> In the array we can pickup no-one or we can pick up all of them, We have to determine wheather to move left and eliminate right half of 
  arr1. So if (l1 > r1) then it means we need to move left and eliminate rigth half (half = mid - 1).
-> Or determine wheather to move right and eliminate left half in arr1. So if (l2 > r2) we eliminate left half and move right.
-> It is better if perform Binary Search on Smaller Array for less time Complexity
-> mid1; mid2 = arr2.size() - mid1
*/
/*
For Odd
-> median = (n1 + n2 + 1) / 2
-> median = max(l1, l2)
*/


/*
double median(vector<int> &a, vector<int> &b) {
  int n1 = a.size();
  int n2 = b.size();
  int n = n1 + n2;
  // If n1 > n2 then we call the funciton again for min size arr  
  if(n1 > n2) return median(b, a);
  // We are taking smaller array for binary search which is (a)
  int low = 0; 
  int high = n1;
  // total no. of element required in the left
  int left = (n1 + n2 + 1)/2;
  while(low <= high){
    int mid1 = low + (high - low) / 2;
    // the remaining elements required in left from arr2
    int mid2 = left - mid1;
    // Now we will initialize l1 and l2, r1 and r2
    int l1 = INT_MIN;
    int l2 = INT_MIN;
    int r1 = INT_MAX;
    int r2 = INT_MAX;

    // Now we will assign values to r1 and r2, l1 and l2 from array
// mid1 can exceed the array therefore we checked below before assigning r1 and r2
    if(mid1 < n1){
      r1 = a[mid1];
    }
    if(mid2 < n2){
      r2 = b[mid2];
    }
// mid2 can go below the size of array therefore we checked below before assigning
// l1 and l2
    if(mid1-1 >= 0){
      l1 = a[mid1-1];
    }
    if(mid2-1 >= 0){
      l2 = b[mid2-  1];
    }

    // Possible answer
    if(l1 <= r2 && l2 <= r1){
      // if n is odd
      if(n % 2 == 1){
        // Answer will be maximum from l1 and l2
        return max(l1, l2);
      }
      // If n is even
      else{
        return (double)(max(l1, l2) + min(r1, r2)) / 2.0;
      }
    }
    else if (l1 > r2){
      high = mid1 - 1;
    }
    else{
      low = mid1 + 1;
    }
  }
  return 0; 
}
  
*/