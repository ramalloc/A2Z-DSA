#include<iostream>
using namespace std;

void palindrome(int n){
    int number = n;
    int reverse = 0;

    while (number != 0)
    {
        int digit = number%10;
        reverse = reverse * 10 + digit;
        number = number/10;
    }

    if(reverse == n){
        cout << "The number " << n << " is palindrome !" << endl;
    }
    else{
    cout << "The number " << n << " is not a palindrome !" << endl;
    }
    
}

int main(){

    int n;
    cout << "Enter the number to be checked a palindrome : ";
    cin >> n;
    palindrome(n);

    return 0;
}