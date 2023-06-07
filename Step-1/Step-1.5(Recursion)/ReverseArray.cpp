#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

void reverseArray(int arr[], int left, int right){
    if(left >= right)
        return;
    swap(arr[left], arr[right]);
    reverseArray(arr, left + 1, right - 1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    reverseArray(arr, 0, n-1);
    cout << endl;
    printArray(arr, n);
    return 0;
}