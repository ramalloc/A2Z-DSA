// BRUTE

/*
1. We take top = 0, left = 0, bottom = 5, right = 5;
2.first loop -> for(i = left -> right){
    a[top][i]; //top is fixed here
}
top++;

2. Second Loop -> for(i = top -> bottom){
        a[i][right]; // right is constant here
}
right--;
3. Third loop -> for(i = right -> left){
    a[bottom][i]; // bottom is constant here
}
bottom--;
4. Fourth Loop -> for(i = bottom -> top){
    a[i][left]; left is constant here
}
left++;

-> We perform the above operation while( top <= bottom && left <= right)

 
-> Edge Cases If we have a single line
    1. First loop performed. Top++;
    2. Second loop will not perform. right--;
    3. Now the right decreases, then the loop performed till right-1;
        To prevent the above case make a check if (top <= bottom) then only perform above loop.
    4. If there is no Top
        if(left <= right) then only print the above loop
*/

/*
vector<int> spiralMatrix(vector<vector<int>> &mat) {
  int n = mat.size();
  int m = mat[0].size();
  vector<int> ans;
  int top = 0, left = 0;
  int right = m - 1, bottom = n - 1;

  while (top <= bottom && left <= right) {
    for (int i = left; i <= right; i++) {
      ans.push_back(mat[top][i]);
    }
    top++;

    for (int i = top; i <= bottom; i++) {
      ans.push_back(mat[i][right]);
    }
    right--;

    if (top <= bottom) {
      for (int i = right; i >= left; i--) {
        ans.push_back(mat[bottom][i]);
      }
      bottom--;
    }

    if (left <= right) {
      for (int i = bottom; i >= top; i--) {
        ans.push_back(mat[i][left]);
      }
      left++;
    }
  }
  return ans;
}
*/

// Time Complexity -> O(N * M)
// Space Complexity -> O(N * M) -> To store the answer



