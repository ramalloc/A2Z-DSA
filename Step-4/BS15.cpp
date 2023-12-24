// Least Capacity to Ship Packages within D Days
/*
-> we have one ship, N products which is size of array and each products has given a weight as element of array. Also we have given Days.
-> The ship will run once per day, and we have to assure that all the products should shipped within given days.
-> So complete the task we have to find the least weight of products that we will load to ship such that we can ship the products
    within 5 days.
-> We have to return the minimum capacity in which we ship all the products within given days.
*/

/*
-> We cannot ship products within given days if we took the capacity of ship lesser than the minimum weight(element) in the given array.
-> So the minimum capacity >= max(arr)
-> The sum of all weights is the maximum capacity of ship to shipped the products in 1 day.
*/

// BRUTE FORCE

/*
#include <bits/stdc++.h>

int daysToShipAllProduct(vector<int> wt, int cap, int n){
    // Initially when day is 1 and no load on ship 
    int day = 1; 

    // Load tracks the previous load on ship as well
    int load = 0;

    // Now we will load the products into the ship by loop
    for(int i = 0; i < n; i++){
        // But while loading to the ship, If The weight of product and load 
        // of the ship exceeds the capacity of the ship.  
        // We will got to next day and load the product into the ship next day.

        if(load + wt[i] > cap){
            day = day + 1;
            load = wt[i];
        }
        else{
            // Else If the load of previous products + weight of the product
            // is not exceeding the capacity of ship then we will add the weight
            //  of the product into the load or we will load the product .
            load += wt[i];
        }
    }
    return day;
}

int leastWeightCapacity(vector<int> &weights, int d)
{
    int n = weights.size();
    int maxCap = 0;
    int minCap = INT_MIN; 
    for(int i = 0; i < n; i++){
        minCap = max(minCap, weights[i]);
        maxCap += weights[i];
    }

    int daysReq = 0;
    for(int i = minCap; i < maxCap; i++){
        int daysReq = daysToShipAllProduct(weights, i, n);
        if(daysReq <= d){
            return daysReq;
        }
    } 

    return daysReq; 
    
}
*/
// Time Complexity = O((maxCap - minCap)+1) * O(N)



