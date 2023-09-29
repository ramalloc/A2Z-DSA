// Problem -> We have a given array and we have to find all the triplets(3 elements) whose sum is equal to a givem number. 
// Here we cannot take same elements more than once in triplets, or we the order should be maitained. There sholdn't be the duplicate triplets.
// We want unique triplets. we cannot take an element twice from the given array.

// BRUTE FORCE
/*
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set<vector<int>> st;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                // After checking that the sum of three elements is equal to 0.
                // Then we are assuring there should not be other triplet which is equal to the current one by using 
                // set data structure to store our answer.
                if(arr[i] + arr[j] + arr[k] == 0){ 
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

Time Complexity -> O(n^3) * O(log(no. of triplets))
Space Complexity -> 2 + O(log(no. of triplets))
*/


// BETTER -> minimizing the time Complexity to N^2
/*
arr[i] + arr[j] + arr[k] = 0;
so, arr[k] = -(arr[i] + arr[j])

from the above formula we will get the element which satisfy the 3 sum
to look the arr[k] in list we are using map data structre or we using hashing.
*/

/*
i at 0 index, j at 1 index and hashmap is empty initially,
so we calculate the third element and check that the hashmap conatains the third element or not.
if the hashmap contains the element then we sort and can store the triplets and j++, and if the hashmap doesn't contains the element
then we store the arr[j] in hashmap to prevent the duplicacy of elements and j++.

-> The above will do for the first or {ith} iteration
*/

/*
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet(int n, vector<int> &arr) {
  set<vector<int>> st;
  for (int i = 0; i < n; i++) {
    set<int> hashset;
    for (int j = i + 1; j < n; j++) {
      int third = -(arr[i] + arr[j]);
      if (hashset.find(third) != hashset.end()) {
        vector<int> tempAns = {arr[i], arr[j], third};
        sort(tempAns.begin(), tempAns.end());
        st.insert(tempAns);
      }
      hashset.insert(arr[j]);
    }
  }

  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}

Time Complexity -> O(n3) * O(logM)
Space Complexity -> O(N2) + O(log(no. of triplets))
*/


// OPTIMAL -> Using Two Pointer Approach

// In Optimal approach, we have to avoid using the set dat structure to minimise the space Complexity. 
// So we have to insert the answer or triplets in sorted order.

// So initially we sort he array and took three pointers i, j and k.
// We put i to arr[0] and j to arr[i+1] and k to end of the array.
// we want -> arr[i] + arr[j] + arr[k] = 0;
// Array is sorted, so if the summision of three elements at i, j and k index is lesser than 0.
// Then We have to increase the value so that we can get near to zero. 
// In order to increase the value we have to j++. Then again calculate the summision.
// And if the summision is greater than the 0, then we have to decrease the summision by k--.
// When we get that sum is equal to zero then include it into answer and move j++ and k--;
// And when j and k crosses themselves then end the loop/iteration
// also during the moving if i, j and k ensure that the next element should be diiferent fro the previuos one.


/*
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet(int n, vector<int> &arr) {
  vector<vector<int>> ans;
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; i++) {
    //   we are ensuring that {ith} element will be different from the previous ones.
    if(i > 0 && arr[i] == arr[i-1]) continue;
    int j = i + 1;
    int k = n - 1;

    while(j < k){
        int sum = arr[i] + arr[j] + arr[k];

        if(sum < 0){
            j++;
        }
        else if(sum > 0){
            k--;
        }
        else{
            vector<int> tempAns = {arr[i], arr[j], arr[k]};
            ans.push_back(tempAns);
            j++;
            k--;
            // We ae moving j and k till the current element is same as previoius one
            while(j < k && arr[j] == arr[j-1]) j++;
            while(j < k && arr[k] == arr[k+1]) k--;

        }
    }
  }

  return ans;
}

Time Complexity -> O(nlog n) + O(n*n) --> O(n logn) for sorting
Space Complexity -> O(no. of triplets)
*/