#include<iostream>
using namespace std;

int factorial(int N){
    if(N == 1 || N == 0) return 1;
    return N * factorial(N-1);
}

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "The factorial of " << n << " is : " << factorial(n);

    return 0;
}