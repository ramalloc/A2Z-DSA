#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to be reverse : ";
    cin >> n;
    int num = n;

    int reverse = 0;
    while(n != 0){
        //Extract the last digit
        int digit = n%10;

        //Appending last digit
        reverse = reverse * 10 + digit;

        // Shrinking X by discarding the last digit
        n = n/10;
    }    
    cout << "The reverse of the number " << num << " is : " << reverse << endl;

    return 0;
}