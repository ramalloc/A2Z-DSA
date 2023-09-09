#include <bits/stdc++.h> 
using namespace std;

vector < vector < int > > numberPattern(int n) {
  vector<vector<int>> ans(n, vector<int>(n));
  int x = n-1;
  for(int i = 0; i <= x; i++){
    for(int j = x; j >= x-i; j--){
        int num = i+1;
        ans[i][j] = num%9;
        
    }
  }

  return ans;
}


void printVector(vector<vector<int>> vect){
    int n = vect.size();
    int m = vect[0].size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << vect[i][j] << " ";
        }
        cout << endl;
    } 

}
int main(){
    int n = 3;
    vector<vector<int>> vec1 = numberPattern(n);
    printVector(vec1);
    return 0;
}
