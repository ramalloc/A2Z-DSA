// Majority Elements which is repeating itself greater than N/3 times.
// arr[1, 2, 2, 3, 2, 1, 1, 3] -> Here N = 8 and N/3 = 2. So We have to find the elements which are repeating itself more then 2 times.

// Here is a observation that there can be only two integers available which is repeating itself more then N/3 times.

// BRUTE 
/*
vector<int> majorityElement(vector<int> v) {
	vector<int> ans;

	int n = v.size();
	for(int i = 0; i < n; i++){
		if(ans.size() == 0 || ans[0] == v[i]){
			int count = 0;
			for(int j = 0; j < n; j++){
				if(v[j] == v[i]){
					count++;
				}
			}
			if(count > n/3){
				ans.push_back(v[i]);
			}
		}

		if(v.size() == 1){
			break; 
		}
	}

	return ans;
}

Time Complexity -> O(n*n)
Space Complexity -> O(1)
*/


// BETTER -> Using Hashing
// keeping the number and its count in hashed map

/*
#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> v) {
	map <int, int> mpp;
	vector<int> ans;

	int n = v.size();
	int mini = int(n/3) + 1;

	for(int i =0; i < n; i++){
		mpp[v[i]]++;

		if(mpp[v[i]] == mini){
			ans.push_back(v[i]);
		}

		if(ans.size() == 2){
			break;
		}
	}

	return ans;
}

Time Complexity -> O(n)
Space Complexity -> O(n)
*/
