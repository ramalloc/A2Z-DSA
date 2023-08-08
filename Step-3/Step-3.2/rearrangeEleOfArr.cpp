// VARIETY - 1


// There is an array of equal number of +ve and -ve elements.
// This N is alsways an Even Number therefore -ve --> N/2 and +ve --> N/2
// The array is random by its elements
// Rearrange the elements of arrays in alternate number by the signs


// BRUTE FORCE 

/*
vector<int> alternateNumbers(vector<int>&a) {
    int n = a.size();
    int pos[n/2] = {0};
    int neg[n/2] = {0};
    int posIndex = 0;
    int negIndex = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            neg[negIndex] = a[i];
            negIndex++;
        }
        else{
            pos[posIndex] = a[i];
            posIndex++;
        }
    }

    for(int i = 0; i < n; i++){
        a[2*i] = pos[i];
        a[2*i+1] = neg[i];
    }

    return a;
}
*/
// Time Complexity --> O(N) + O(N)
// Space Complexity --> O(N)



// OPTIMAL 

/*
// In better, We tried to minimise the Time Complexity by O(N)

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        int n = a.size();
  vector<int> ans(n, 0);

  int posIndex = 0;
  int negIndex = 1;

  for (int i = 0; i < n; i++) {
    if (a[i] < 0) {
        ans[negIndex] = a[i];
        negIndex += 2;
    } else {
        ans[posIndex] = a[i];
        posIndex += 2;
    }
  }
    return ans;
    }
};
*/

// Time Complexity --> O(N)
// Space Complexity --> O(N)




// VARIETY - 2
// No surity that number +ve is equal to -ve

/*

#include <bits/stdc++.h> 

void posAndNeg(vector<int> &a)
{
    int n = a.size();
    vector<int> pos, neg;

    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);
        }
    }

    if(pos.size() > neg.size()){
        for(int i = 0; i < neg.size(); i++){
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }
        int index = neg.size() * 2; // Index for the iteration of the main array.
        for(int i = neg.size(); i < pos.size(); i++{ // Iterating positive Vector for the remaining values
            a[index] = pos[i];
        }
    }
    else{
        for(int i = 0; i < pos.size(); i++){
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }
        int index = pos.size() * 2;
        for(int i = pos.size(); i < neg.size(); i++){ // Iterating Negative Vector for the remaining values
            a[index] = neg[i];
        }
    }
    return a;
}*/