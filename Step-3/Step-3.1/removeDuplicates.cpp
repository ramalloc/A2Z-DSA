// OPTIMAL

// int removeDuplicates(vector<int> &arr, int n) {
// 	int i = 0;
// 	int j = 1;

// 	while(j < n){
// 		if(arr[i] != arr[j]){
// 			arr[i+1] = arr[j];
// 			i++;
// 			j++;
// 		}
// 		else{
// 			j++;
// 		}
// 	}

// 	return i+1;
// }