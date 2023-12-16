// 1. Reverse an Array
// 2. Check the given string is palindrome or not



#include<iostream>
using namespace std;

void reverseaArray(int arr[], int i, int j){
    if(i >= j) return;
    swap(arr[i], arr[j]);
    reverseaArray(arr, i+1, j-1);
}

bool isPalindrome(string &s, int i){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    isPalindrome(s, i+1);
}

void printArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i = 0;
    int j = n-1;
    // reverseaArray(arr, i, j);
    // printArray(arr, n);

    // String Check Palindrome
    string s = "madan";
    bool isStringPalin = isPalindrome(s, 0);
    if(isStringPalin){
        cout << "String is Palindrome...";
    }
    else{
        cout << "String is not Palindrome..!";
    }

    return 0;
}

// Time Complexity = O(N/2);
// Time Complexity = O(1);