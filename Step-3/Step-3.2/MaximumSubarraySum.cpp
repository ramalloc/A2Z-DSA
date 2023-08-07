// BRUTE 
 
// BETTER

// OPTIMAL 
/* KADANE'S ALGORITHM - It states that start adding from the index zero of the array till the end of it.But ander some conditions :-
    1. Make a {sum} variable which sums the elements  in a loop, Add the first element in sum 
    2. And if sum remained less than the zero then mark the value of {sum} equals to Zero.
    3. Mark {maxi} = {sum}, If {sum > maxi}
*/
/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0, maxi = LONG_MIN;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            if(sum > maxi){
                maxi = sum;
            }

            if(sum < 0){
                sum = 0;
            }
        }

        return maxi;
    }
};

*/

// Time Complexity = O(N)
// Space Complexity = O(1)

// ** If to print the longest subarray **

/* class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0, maxi = LONG_MIN;
        int start;
        int ansStart = 0; 
        int ansEnd = 0; 
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            if(sum == 0){
                start = i;
            }

            if(sum > maxi){
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }

            if(sum < 0){
                sum = 0;
            }
        }

        return maxi;
    }
};

*/
