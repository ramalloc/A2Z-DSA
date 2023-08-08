// BETTER - Using Hashmap

// #include<bits/stdc++.h>
// int majorityElement(vector<int> v) {
// 	map<int, int> mpp;
// 	for(int i = 0; i < v.size(); i++){ --> N
// 		mpp[v[i]]++;
// 	}

	// for(auto it: mpp){     --> NlogN
// 		if(it.second > (v.size()/2)){
// 			return it.first;
// 		}
// 	}

// 	return -1;
// }

// Time Complexity -> O(NlogN) + O(N)
// Space Complexity -> O(N)


// OPTIMAL
// MOORE's VOTING ALGORITHM
/*The Boyer-Moore voting algorithm is one of the popular optimal algorithms which is used to find the majority 
    element among the given elements that have more than N/ 2 occurrences.
This works perfectly fine for finding the majority element which takes 2 traversals over the given elements, 
which works in O(N) time complexity and O(1) space complexity.
*/

// int majorityElement(vector<int> v) {
// 	int vote = 0;
// 	int elm;
// 	for(int i = 0; i < v.size(); i++){
// 		if(vote == 0){
// 			vote = 1;
// 			candidate = v[i];
// 		}
// 		else if(v[i] == candidate){
// 			vote++;
// 		}
// 		else{
// 			vote--;
// 		}
// 	}

// Above is the Moore's Algorithm

// Below code is to ensure that the element found above is the highest occured or not


// 	int count1 = 0;
// 	for(int i = 0; i < v.size(); i++){
// 		if(v[i] == candidate){
// 			count1++;
// 		}
// 	}
// 	if(count1 > (v.size()/2)){
// 		return candidate;
// 	}

// 	return -1;
// }

// Time Complexity --> O(N) + {O(N) --> never occurs}
// Space Complexity --> O(1)