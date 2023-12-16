// Sum of Numbers upto given number

#include<iostream>
using namespace std;

// Parameterised  Recursion
void sumOfNums(int n, int sum){
    if(n < 1){
        cout << sum;
        return;
    }
    sumOfNums(n-1, sum+n);
}

// Functional Recursion
int sumOfNumsFun(int n){
    if(n == 0) return 0;
    return n + sumOfNumsFun(n-1);
}


// Factroial of N
int factOfNUm(int n){
    if(n == 0) return 1;

    return n * factOfNUm(n-1);
}
int main(){
    int n;
    cin >> n;

    // Parameterised
    // sumOfNums(n, 0);

    // Funcitonal
    // cout << sumOfNumsFun(n);


    // Factorial of a Number
    cout << "factorial of number " << n << "is : " << factOfNUm(n);
    return 0;
}
