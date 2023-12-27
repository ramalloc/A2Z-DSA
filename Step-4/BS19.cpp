// Painter's Partition and Split Array - Largest Sum
// -> Both Problem's concept is same 
// Painter Partition
/*
-> We have a long wall which is array, and the some units of area in the wall that has to be paint amd we have given number of painters
     which is k. The painter takes the same unit of time to paint which was the unit of wall.
-> We need to ensure that each painter should get atleast one unit of wall to paint. The paint should be done in consecutive manner.
-> Every painter takes some unit of time, so we have to return the minimum of maximum time taken by a painter.
*/

/*
#include <bits/stdc++.h>
int noOfPainters(vector<int> boards, int totalUnits, int n){
    // We assigned 0 unit wall to the 1st student
    int numOfPainters = 1;
    int unitsOfWall = 0;
    for(int i = 0; i < n; i++){
        if(unitsOfWall + boards[i] <= totalUnits){
            unitsOfWall += boards[i];
        }
        else{
            numOfPainters++;
            unitsOfWall = boards[i];
        }
    }

    return numOfPainters;
}
int findLargestMinDistance(vector<int> &boards, int k)
{   
    int n = boards.size();
    if(k > n) return -1;

    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);

    while(low <= high){
        int mid = low + (high - low)/2;
        int painters = noOfPainters(boards, mid, n);

// If answer painters are > k it means need to more units of wall to
        if(painters > k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return low;
}
*/
// Time Complexity = O(Log(sum - max)) * O(N)




// Split Array - Largest Sum
/*
-> Split the array in k sub arrays and ensure that each subarray has atleast one element such that maximum subarray's sum is minimum.
*/