// BRUTE FORCE
// First took all the non zero numbers and put that in different vector, Now the remainings are zero.  Time Complexity -> O(n)
// So the arr.size() - tempArr.size() = no. of zeroes.
// Second put the elements of tempArr in arr till tempArr.size(); Time Complexity -> O(x)
// Third put the 0 in the remaning indexes of arr. Time Complexity -> O(n - x)

/*
vector<int> moveZeros(int n, vector<int> a) {
  vector<int> temp;
  for(int i = 0; i < n; i++){
    if(a[i] != 0){
      temp.push_back(a[i]);
    }
  }

  for(int i = 0; i< temp.size(); i++){
    a[i] = temp[i];
  }


  for(int i = temp.size(); i < n; i++){
    a[i] = 0;
  }
  
  return a;
}
*/
// Time Complexity -> O(2n)
// Space Complexity -> O(n)


// OPTIMAL
// We are using 2 pointer approach, i at j+1  and j is at zero always. Time Complexity -> O(x)
//  if i = non-zero then swap(a[i], a[j]), if i = 0 then continue;  Time Complexity -> O(n-x)
/*
vector<int> moveZeros(int n, vector<int> a) {
  vector<int> temp;
  int j = -1;
  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      j = i;
      break;
    }
  }

  if (j != -1) {
    for (int i = j + 1; i < n; i++) {
      if (a[i] != 0) {
        swap(a[i], a[j]);
        j++;
      }
    }
  }
  return a;
}
*/

// Time Complexity -> O(n)
// Space Complexity -> O(1)