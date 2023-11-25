// Problem -> We have given an array and we have to find/return 4 different indexes,
// So that the sum of the nubers at those indexes is equals to Target value.

// BRUTE
/*
// checking all possible quadruplets:
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                for (int l = k + 1; l < n; l++) {
                    // taking bigger data type
                    // to avoid integer overflow:
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    sum += nums[l];

                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;

    // Time Complexity -> O(n^4)
    // Space Complexity -> O(no. of Quads) * 2
    */



// BETTER
// we will reduce the time complexity to N^3 by using Hashmap
// We will calculate the value of nums[l]. We can write that the nums[l] = target - (nums[i] + nums[j + nums[k]])
// And we will check tha
