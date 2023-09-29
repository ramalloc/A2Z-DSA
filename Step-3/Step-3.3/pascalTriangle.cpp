// Pascal Triangle

// There can be 3 types of questions :-
/*
1.Give Element at a given Row and Column index;
2.Print the nth row of Pascale's Triangle
3. Print the triangle to the nth row
*/

// 1.
//  The first solution is brute force solution, that generate the whole triangle and get the element at the given index
//  And we have a Formula for this, which we implement with the use Combination.
//  Formula is :-  ⁽ᴿ⁻¹⁾ C ₍c-₁₎ .
/*  ⁿCᵣ =   n!
         ----------
         r! X (n-r)!
*/
// The above formula is too long and will take much time, So we will observe the formula again by example :-
/*
n = 7;
r = 2;
for ⁷C₂ =   7!
         ----------
         2! X (7-2)!

    =>      7x6x(5)!
         ---------------
            2! X (5)!

                7x6
     =>    -----------  =>
                2!
*/
// 1.So we can see here that 5! is cutting from numerator and denominator.
// 2. We can also see that 7! is going to numberof iteration of r.
/* -> Impt. thing to take care =>      7x6
                                    -----------
                                        2x1

                            =>          7     6
                                       --- X ---
                                        1     2
*/

/*
#include<iostream>
using namespace std;

int nCr(int n, int r){
    int res = 1;

    for(int i = 0; i < r; i++){
        res = res * (n-i);
        res = res / (i+1);
    }

    return res;
}


int main(){
    // Use long long, So that answer cannot overflow
    long long n = 3;
    long long r = 2;

    long long result = nCr(n,r);
    cout << result;


    return 0;
}
*/

// Time Complexity -> O(r)
// Space Complexity -> O(1)

/* <-- Printing Nth Row of Pascales Triangle -->*/
// We can observe that no. of elements is equals to the no. of rows.

// BRUTE FORCE
// We call the nCr() N times to get the element at each and every index.
// This will take O(N*r) Time Complexity

// OPTIMIZE
// In order to print the Nth row We can observe that 1st and last element is alsways 1.
// So we have to print the others.

/*
N = 6;
int ans = 1;
cout << ans;
for(int i = 1; i < N; i++){
    ans = ans*(n-i);
    anns = ans / i;
    cout << ans;
}
cout << "1";
*/



/* -- Printing The whole pascale triangle upto Nth Row--*/

/*
vector<int> generateRow(int row) {
  vector<int> ansRow;
  long long ans = 1;
  ansRow.push_back(1);

  for (int col = 1; col < row; col++) {
    ans = ans * (row - col);
    ans = ans / col;
    ansRow.push_back(ans);
  }

  return ansRow;
}
vector<vector<int>> pascalTriangle(int N) {
  vector<vector<int>> ansVec;

  for (int i = 1; i <= N; i++) {
    vector<int> tempAns = generateRow(i);
    ansVec.push_back(tempAns);
  }

  return ansVec;
}
*/