//  Multiple Recursion Calls
// Here we are understanding Multiple Recursion Calls through Fibonacci Series

#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cout << "Enter the nth number of fibonacci : ";
    cin >> n;    
    cout << "The Fibonacci number at " << n << " is : " << fibonacci(n);
    return 0;
} 

// Time Complexity = O(2^n) (exponential in nature) 