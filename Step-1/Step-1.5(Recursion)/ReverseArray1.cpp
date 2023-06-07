#include <iostream>
#include <algorithm>
using namespace std;
// Reversing the array using reverse function
void printArray(int arr[], int N)
{
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    reverse(arr, arr+n);
    cout << endl;
    printArray(arr, n);

    return 0;
}