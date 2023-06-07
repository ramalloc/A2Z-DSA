#include <iostream>
using namespace std;

void printArray(int arr[], int N)
{
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int i, int N){
    if(i >= N/2)
        return;
    swap(arr[i], arr[N-i-1]);
    reverseArray(arr, i + 1, N);

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    reverseArray(arr, 0, n);
    cout << endl;
    cout << "Array after reversing : " << endl;
    printArray(arr, n);
    return 0;
}