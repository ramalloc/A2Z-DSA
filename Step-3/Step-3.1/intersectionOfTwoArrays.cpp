 // Brute Force
 #include<iostream>
 #include <bits/stdc++.h> 
 using namespace std;

// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	vector<int> temp;
// 	int visited[m] = {0};
// 	for(int i = 0; i < n; i++){
// 		for(int j = 0; j < m; j++){
// 			if(arr1[i] == arr2[j] && visited[j] == 0){
// 				temp.push_back(arr1[i]);
// 				visited[j] = 1;
// 				break;
// 			}

// 			if(arr2[m] > arr1[n]){
// 				break;
// 			}
// 		}
// 	}
	
// 	return temp;
// }


// OPTIMAL

// #include <bits/stdc++.h>
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2,
//                                   int m) {
//   vector<int> temp;

//   int i = 0;
//   int j = 0;

//   while (i < n && j < m) {
//     if (arr1[i] < arr2[j]) {
//       i++;
//     }

//     else if (arr2[j] < arr1[i]) {
//       j++;
//     }

//     else {
//       temp.push_back(arr1[i]);
//       i++;
//       j++;
//     }
//   }

//   return temp;
// }