/*
Permutation - No. of Possible arrangements of the numbers 
    {123} --> permutation = factorial of no. of digits.
    the every permutation of any number series is greate than the before's permutation exmaple -> 123, 132, 213, 231, 312, 321.
    If permutations get over, there is no next permutation available then the first permutation will be the next.

*/


// BRUTE FORCE

/*
1. Generate all Permutation in Sorted Order Usign Recursion
2. Linear Search
3. Next Permutation 
*/

// Time Complexity -> O(N!)
// Therefore we are not using this 



// BETTER 
// Using C++ STL
 /*
 next_permutation(arr.begin(), arr.end());
 */ 