// K-th element of two sorted arrays
/*
-> We have given two arrays, both are sorted. So we need to merge them hypothetically and get an array which is int sorted order.
-> At last we have to return the kth element from the combined hypothetical array, {k} also given.
*/
/*
-> We are using same concept of median here. We will choose low = max(0, k - n2) and high = min(k, n1).
    because we can get k elements maximum in left and minimum we can get atleast k - n2  or 0
-> Here we use this concept that how much element we need in left = k, this will gives the kth element in last of left which is maximum in left.
*/
/*
#include <bits/stdc++.h>

int kthElement(vector<int> &arr1, vector<int>& arr2, int n1, int n2, int k){
    if(n1 > n2){
        return kthElement(arr2, arr1, n2, n1, k);
    }
    int n = n1 + n2;

    // We need atleast k - n2 elements from arr1
    int low = max(0, k - n2); 

    // We can keep minimum of k elements from the arr1
    int high = min(k, n1);

    // We need only k elements in left so that the last element will be our answer.
    int left = k;

    while(low <= high){
        int mid1 = low + (high - low)/2;
        // mid2 run in arr2 or on higher no. of elements 
        int mid2 = left - mid1;
        int l1 = INT_MIN;
        int l2 = INT_MIN;
        int r1 = INT_MAX;
        int r2 = INT_MAX;
        if(mid1 < n1){
            r1 = arr1[mid1];
        }
        if(mid2 < n2){
            r2 = arr2[mid2];
        }
        if(mid1 - 1 >= 0){
            l1 = arr1[mid1 - 1];
        }
        if(mid2 - 1 >= 0){
            l2 = arr2[mid2 - 1];
        }
        // When l1 and l2 is in left
        if(l1 <= r2 && l2 <= r1){
            // max l1 or l2 will be the answer
            return max(l1, l2);
        }
        else if (l1 > r2){
            high = mid1 - 1;
        }else{
            low = mid1 + 1;  
        }
    }
    return 0;

}
*/
// Time Complexity = O(log(min(n1, n2)))