// Koko Eating Bananas 
/*
->  koko have to eat all bananas with given hour and we have to find the minimum hour for one piles (guchha).
-> The minimum hour that koko takes to eat one pile of banana, And the total summision of hours which koko takes to it all pile's bananas
    should not exceed more than given hours.
-> To eat Maximum bananas in a pile is the maximum hours to eat all bananas
-> So our answer will alsway lies between 1 and maximum number of bananas in a pile(last element of array).

-> We are applying Binary Search on Answers not on array.
*/

/*
#include <bits/stdc++.h>
int maxEl(vector<int> arr){
    int maxi = INT_MIN;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        maxi = max(maxi, arr[i]);
    }

    return maxi;
}
long long int hrsToEat1Pile(vector<int> &v, int perHour){
    long long int totalHours = 0;
    int n = v.size();
    for(int i = 0; i < n; i++){
        totalHours += ceil((double)v[i] / (double)perHour);
    }
    return totalHours;
} 
int minimumRateToEatBananas(vector<int> v, int h) {
    int low = 1;
    int high = maxEl(v);
    while(low <= high){
        int mid = (low + high) / 2;

        long long int ceilHours = hrsToEat1Pile(v, mid);

        // Low end to the answer always
        if(ceilHours <= h){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return low;
}
*/

// Time Complexity = O(N) * O(log (maxElement)